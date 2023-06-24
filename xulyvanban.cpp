#include<bits/stdc++.h>
using namespace std;

int main(){
  	string s;
  	string tmp;
  	vector<string>v;
  	while(cin>>s){
    	for(int i=0;i<s.length();i++) s[i]=tolower(s[i]);
    	tmp+=s;
    	tmp+=" ";
    	char x=s[s.size()-1];
    	if(x=='.'||x=='?'||x=='!'){
     		tmp.pop_back();
      		tmp.pop_back();
      		v.push_back(tmp);
      		v.front()[0]=toupper(v.front()[0]);
      		tmp="";
      		for(auto x:v) cout<<x<<endl;
      		v.clear();
    	}
  	}
}
