#include<bits/stdc++.h>
using namespace std;

bool check1(string s){
	for(int i=0;i<4;i++){
		if(s[i]>=s[i+1]){
			return false;
		}
	}
	return true;
}
bool check2(string s){
	for(int i=0;i<5;i++){
		if(s[i]!=s[0]){
			return false;
		}
	}
	return true;
}
bool check3(string s){
	for(int i=0;i<3;i++){
		if(s[i]!=s[0]){
			return false;
		}
	}
	if(s[3]!=s[4]) return false;
	return true;
}
bool check4(string s){
	for(int i=0;i<5;i++){
		if(s[i]!='6'&&s[i]!='8'){
			return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string temp=s.substr(5,6);
		temp.erase(3,1);
		if(check1(temp)||check2(temp)||check3(temp)||check4(temp)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
