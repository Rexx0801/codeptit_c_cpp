#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	pair<int,int> a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
	}
	sort(a,a+n);
	int end_time=-1;
	for(int i=0;i<n;i++){
		end_time=max(end_time,a[i].first);
		end_time+=a[i].second;
	}
	cout<<end_time<<endl;
}
