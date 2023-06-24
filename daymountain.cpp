#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int l,r;
        cin>>l>>r;
        int vitri=l,kt=0;
        for(int i=l;i<=r;i++){
           if(a[vitri]<a[i]) vitri=i;
        }
        for(int i=l;i<vitri;i++){
            if(a[i]>a[i+1]) kt++;
        }
        for(int i=vitri;i<r;i++){
            if(a[i]<a[i+1]) kt++;
        }
        if(kt!=0) cout<<"No\n";
        else cout<<"Yes\n";
    }
}
