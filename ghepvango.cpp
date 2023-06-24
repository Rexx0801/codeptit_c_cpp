#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n; cin >> n;
		long long a[n+5];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		stack<long long> st;
		long long res=0;
		int i=0;
		while(i<n)
		{
			if(st.empty() || a[i]>=a[st.top()])
			{
				st.push(i);
				i++;
			}
			else
			{
				long long idx=st.top();
				st.pop();
				if(st.empty())
				{
					if(a[idx]<=i)
					{
						res=max(res,a[idx]);
					}
					
				}
				else
				{
					if(a[idx]<=i-st.top()-1)
					{
						res=max(res,a[idx]);
					}
				}
			}
		 } 
		 while(!st.empty())
		 {
		 	long long idx=st.top();
			st.pop();
			if(st.empty())
			{
				if(a[idx]<=i)
					{
						res=max(res,a[idx]);
					}
			}
			else
			{
				if(a[idx]<=i-st.top()-1)
					{
						res=max(res,a[idx]);
					}
			}
		 }
		 cout << res << endl;
	}
}
