#include<bits/stdc++.h>
using namespace std;

int sx(int* arr,int n,int k){
    int dem=0;
    for(int i=0;i<n;i++)
        if(arr[i]<=k)
            dem++;
    int m=0;
    for (int i=0;i<dem;i++)
        if(arr[i]>k)
            m++;
    int ans=m;
    for(int i=0,j=dem;j<n;i++,j++){
        if(arr[i]>k)
            m--;
        if(arr[j]>k)
            m++;
        ans=min(ans,m);
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[1000000];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<sx(a,n,k)<<endl;
    }
}
