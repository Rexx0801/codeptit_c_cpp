#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int dem=0;
        for(int i=0;i<n;i++){
            int tg=a[i]+k;
            int chiSo=lower_bound(a,a+n,tg)-a;
            int c=chiSo-i-1;
            if(c>=1) dem+=c;
        }
        cout<<dem<<endl;
    }
}
