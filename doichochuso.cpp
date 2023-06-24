#include<bits/stdc++.h>
using namespace std;

string cmp(string s){
  	int dem=1;
  	for(int j=0;j<s.size();j++){
    	if(s[j]<s[j+1]) dem++;
  	}
  	if(dem==s.size()) return "-1";
  	int i=s.size()-1;
  	while(s[i]>=s[i-1]) i--;
  	int k=i;
  	for(k=s.size()-1;k>=i;k--){
    	if(s[k]<s[i-1]&&s[k]!=s[k-1]){
      		swap(s[k],s[i-1]);
      		break;
    	}
  	}
  	return s;
}
int main(){
  	int t;
  	cin>>t;
  	cin.ignore();
  	while(t--){
  		string s;
  		cin>>s;
  		cout<<cmp(s)<<endl;
  	}
}
