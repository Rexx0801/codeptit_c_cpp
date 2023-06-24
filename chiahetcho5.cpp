#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int sum=0;
        for(int i=0;i<s.size()/2;i++){
            char temp=s[i];
            s[i]=s[s.size()-1-i];
            s[s.size()-1-i]=temp;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(i%4==1) sum=sum+2;
                else if(i%4==3) sum=sum+3;
                else if(i%4==2) sum=sum+4;
                else sum=sum+1;
            }
        }
        if(sum%5==0) cout<<"Yes";
        else cout<<"No";
    }
}
