#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; 
	cin>>t; 
	while(t--){
		int n; 
		cin>>n;
		int a[n];
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			v[i]=a[i];
		}
		sort(v.begin(),v.end());
		for(int x:a){
			auto it=upper_bound((v.begin(),v.end()),x);
			if(it==v.end()){
				cout<<"_ ";
			}
			else cout<<*it<<" ";
		}
		cout<<endl;
	}
}
