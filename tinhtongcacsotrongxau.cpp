#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int res=0,sum=0;
		for(int i=0;i<s.size();i++){
			if(isdigit(s[i])){
		 		res=res*10+s[i]-'0';
			}else{
				sum+=res;
				res=0;
			}
		}
		if(isdigit(s[s.size()-1])) sum+=res;
		cout<<sum<<endl;
	}
}
