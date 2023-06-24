#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int check=0;
        for(auto x:a){
             if(mp[x]>1){
                cout<<x<<endl;
                check=1;
                break;
            }
        }
        if(check==0) cout<<"NO"<<endl;
    }
}
