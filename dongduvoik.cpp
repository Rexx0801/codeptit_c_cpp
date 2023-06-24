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
        sort(a,a+n);
        int kc=a[n-1]-a[0];
        int dem=0;
        if(kc==0) dem==0;
        else{
            for(int i=1;i<=kc;i++){
                int check=0;
                if(kc%i==0){
                    for(int j=1;j<n;j++){
                        if(a[j]%i!=a[0]%i){
                            check++;
                            break;
                        }
                    }
                    if(check==0) dem++;
                }
            }
        }
        cout<<dem<<endl;
    }
}
