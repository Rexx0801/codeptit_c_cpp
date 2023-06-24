#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
	    int dem=0;
	    if(s[0]!=' ')
		    dem=1;
	    for(int i=0;i<s.size();i++){
	    	if(s[i]==' '&&s[i+1]!=' '||s[i]=='\t'&&s[i+1]!='\t'||s[i]=='\n'&&s[i+1]!='\n')
	    		dem++;
    	}
    	cout<<dem<<endl;
	}
}
