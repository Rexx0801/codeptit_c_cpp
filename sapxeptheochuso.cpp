#include<bits/stdc++.h>
using namespace std;

int cmp(string a,string b){
  	string x=a+b;
  	string y=b+a;
  	return x>y?1:0;
}
int main(){
  	int t;
  	cin>>t;
  	while(t--){
  		int n;
  		cin>>n;
  		cin.ignore();
  		vector<string>a(n);
  		for(int i=0;i<a.size();i++) {
    		cin>>a[i];
  		}
  		sort(a.begin(),a.end(),cmp);
  		for(int i=0;i<a.size();i++) cout<<a[i];
  		cout<<endl;
  	}
}
