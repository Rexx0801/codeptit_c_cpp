#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int h,c;
        cin>>h>>c;
        int a[h][c],b[h][c];
        for(int i=0;i<h;i++){
            for(int j=0;j<c;j++){
                cin>>a[i][j];
                b[i][j]=0;
            }
        }
        int dem=0;
        for(int k=0;k<c/2;k++){
            for(int i=k+1;i<c-k;i++){
                b[k][i]=a[k][i-1];
            }
            for(int i=k+1;i<h-k;i++){
                b[i][c-1-k]=a[i-1][c-1-k];
            }
            for(int i=c-2-k;i>=k;i--){
                b[h-1-k][i]=a[h-1-k][i+1];
            }
            for(int i=h-2-k;i>=k;i--){
                b[i][k]=a[i+1][k];
            }
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<c;j++){
                if(b[i][j]==0) b[i][j]=a[i][j];
                cout<<b[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
