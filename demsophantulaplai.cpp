#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10000],n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int kt[1000000];
        for(int i=0;i<n;i++) {
            cin>>a[i];
            kt[i]=0;
        }
        int tong=0;
        for(int i=0;i<n;i++){
            int dem=1;
            if(kt[i]==0){
                for(int j=i+1;j<n;j++){
                    if(a[i]==a[j]){
                        kt[j]=1;
                        dem++;
                    }
                }
            }
            if(dem>1) tong+=dem;
        }
        cout<<tong<<endl;
    }
}
