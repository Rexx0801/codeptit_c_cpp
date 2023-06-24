#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n+m];
        set<long long> b;
        for(int i=0;i<n+m;i++) cin>>a[i];
        sort(a,a+n+m);
        set<long long> it;
        for(int i = 0; i < n + m; i++) b.insert(a[i]);
        for(std::set<long long>::iterator it=b.begin();it!=b.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
        for(int i=0;i<m+n;i++) {
            if(a[i]==a[i-1]) cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
