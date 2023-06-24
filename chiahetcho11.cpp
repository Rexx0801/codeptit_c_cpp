#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int tongchan=0,tongle=0;
		for(int i=0;i<s.size();i++){
			if(i%2==0){
				tongchan=tongchan+s[i]-'0';
			}else{
				tongle=tongle+s[i]-'0';
			}
		}
		int hieu=tongle-tongchan;
		if(hieu%11==0) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
