#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
using namespace std;
using ll = long long;
string s, t;
bool isprime(int);
int a[10000];
vector <int> P;
void init()
{
	memset(a, 0, sizeof(0));
	for(int i = 2; i <= 9999; i++)
	{
		if(a[i] == 0)
		{
			P.push_back(i);
			for(int j = i*i; j <= 9999; j+= i)
			{
				a[j] = 1;
			}
		}
		
	}
}
int solve()
{
	set <string> se;
	cin >> s >> t;
	queue <pair<string, int>> q;
	q.push({s, 0});
	se.insert(s);
	while(!q.empty())
	{
		pair <string, int> top = q.front(); q.pop();
		string str = top.fi;
		int cnt = top.sec;
		if(str == t) return cnt;
		for(int i = 0; i < str.length(); i++)
		{
			char tmp = str[i];
			for(char j = '0'; j <= '9'; j++)
			{
				str[i] = j;
				int num = stoi(str);
				if(num > 1000 && binary_search(P.begin(), P.end(), num) == 1 && se.find(str) == se.end() )
				{
					if(str == t) return cnt+1;
					se.insert(str);
					q.push({str, cnt+1});
				}
			}
			str[i] = tmp;
		}
	}
	return 0;
	
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	init();
	while(test--)
	{
		cout << solve() << endl;;
	}
	return 0;
}
