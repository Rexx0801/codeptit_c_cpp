#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;
		cin>>s>>k;
		int ans=0;
		for(int i=0;i<s.size();i++){
			int dem[256];
			memset(dem,0,sizeof(dem));
			int dem1=0;
			for(int j=i;j<s.size();j++){
				if(dem[s[j]]==0){
					dem1++;
				}
				if(dem1==k){
					ans++;
				}
				if(dem1>k){
					break;
				}
				dem[s[j]]++;
			}
		}
		cout<<ans<<endl;
	}
}
