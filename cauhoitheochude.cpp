#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	cin.ignore(1);
    string a[n+1];
    vector<string>s;
    map<string,int>d;
    for(int i=0;i<n;i++){
        getline(cin,a[i]);
        if(i==0||a[i-1]=="")s.push_back(a[i]);
        else if(a[i]!="")d[s.back()]++;
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<": "<<d[s[i]]<<endl;
    }
    return 0;
}
