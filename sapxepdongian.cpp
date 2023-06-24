#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,m=0;
    cin>>n;
    int a[n],b[n+1]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]=b[a[i]-1]+1;
        m=max(m,b[a[i]]);
    }
    cout<<n-m<<endl;
}
