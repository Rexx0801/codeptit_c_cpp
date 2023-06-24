#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[1000],b[1000],c[1000];
        for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
            b[i]=abs(x-a[i]);
        }
        sort(b,b+n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(b[j]==abs(x-a[i])){
                    c[j]=a[i];
                    b[j]=-1;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++) cout<<c[i]<<" ";
        cout<<endl;
    }
}
