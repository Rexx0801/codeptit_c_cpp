#include<bits/stdc++.h> 
using namespace std; 

int main(){
    int n,m,a[1000],b[1000]={0};
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    int max=0,max2=0,k=0;
    for(int i=1;i<=m;i++){
        if(b[i]>max)
            max=b[i];
    }
    for(int i=1;i<=m;i++){
        if(b[i]>max2&&b[i]!=max){
            max2=b[i];
            k=i;
        }
    }
    if(max2==0) cout<<"NONE";
    else{
        for(int i=0;i<n;i++){
            if(k==a[i]){
                cout<<k;
                break;
            }
        }
    }
}
