#include<bits/stdc++.h>
using namespace std;

long long sonam(string x){
    long long sum=0;
    for(int i=0;i<x.size();i++){
        if(x[i]=='6') x[i]='5';
        int j=int(x[i]-'0');
        sum=sum*10+j;
    }
    return sum;
}

long long sosau(string x){
    long long sum=0;
    for(int i=0;i<x.size();i++){
        if(x[i]=='5') x[i]='6';
        int j=int(x[i]-'0');
        sum=sum*10+j;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        cout<<sonam(a)+sonam(b)<<" "<<sosau(a)+sosau(b)<<endl;
    }
}
