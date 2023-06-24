#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
struct Cata{
	string num;
};
Cata operator * (Cata a, int b)
{
	string x = a.num, y = to_string(b);
	int len1 = x.size(), len2 = y.size(), z;
	vector <int> v(len1+len2, 0);
	int i_n1 = 0, i_n2 = 0, carry = 0;
	for(int i = len1-1; i >= 0; i--)
	{
		i_n2 = 0, carry = 0;
		for(int j = len2-1; j >= 0; j--)
		{
			int sum = (x[i] - '0')*(y[j] - '0') + v[i_n1+i_n2] + carry;
			v[i_n1 + i_n2] = sum%10;
			carry = sum/10;
			i_n2++;
		}
		if(carry > 0) v[i_n1 + i_n2] += carry;
		i_n1++;
	}
	int i = v.size()-1;
	while(v[i] == 0)
		i--;
	string ans = "";
	for(int j = i; j >= 0; j--)
		ans.push_back(v[j]+'0');
	Cata res; res.num = ans;
	return res;
}
Cata operator / (Cata a, int b)
{
	string x = a.num;
	int P = x[0] - '0', i = 0;
	while(P < b)
	{
		P = 10*P + x[++i] - '0';
	}
	string ans = "";
	while(i < x.length())
	{
		ans.push_back(P/b + '0');
		P = (P%b*10 + x[++i]-'0');
	}
	Cata res; res.num = ans;
	return res;
	
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	Cata list[101];
	list[0].num = "1", list[1].num = "1";
	for(int i = 2; i <= 100; i++)
	{
		list[i] = list[i-1]*(4*i-2)/(i+1);
	}
	while(t--)
	{
		int n; cin >> n;
		cout << list[n].num << endl;
		
	}
	return 0;
}

