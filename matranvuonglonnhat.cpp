#include <bits/stdc++.h>
using namespace std;

char a[100][100];
void find(int n){
    int max=0;
    int b[n][n],c[n][n];
    b[0][0]=c[0][0]=(a[0][0]=='X');
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='O')
                c[i][j]=b[i][j]=0;
            else{
                b[i][j]=(j==0)?1:b[i][j-1]+1;
                c[i][j]=(i==0)?1:c[i-1][j]+1;
            }
        }
    }
    for(int i=n-1;i>=1;i--){
        for(int j=n-1;j>=1;j--){
            int k=min(b[i][j],c[i][j]);
            while(k>max){
                if(c[i][j-k+1]>=k&&b[i-k+1][j]>=k){
                    max=k;
                }
                k--;
            }
        }
    }
    cout<<max<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		find(n);
	}
}
