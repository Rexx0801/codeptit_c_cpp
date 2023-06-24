#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        long long sodau=a[0]*a[1],socuoi=a[n-1]*a[n-2];
        cout<<sodau<<" ";
        for(int i=1;i<n-1;i++){
            cout<<a[i+1]*a[i-1]<<" ";
        }
        cout<<socuoi<<endl;
    }
}
