#include<bits/stdc++.h>
using namespace std;
int main(){
  	int t;
  	cin>>t;
  	while(t--){
  		int n;
  		cin>>n;
  		int a[n][n];
  		long long sum1=0,sum2=0,b[n],c[n],sum3=0;
  		for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
      			cin>>a[i][j];
      			sum1+=a[i][j];
    		}
  		}
  		for(int i=0;i<n;i++){
    		sum2=0;sum3=0;
    		for(int j=0;j<n;j++){
      			sum2+=a[i][j];
      			sum3+=a[j][i];
			}
    		b[i]=sum2;
    		c[i]=sum3;
  		}
  		sort(b,b+n);
  		sort(c,c+n);
  		cout<<max(b[n-1]*n-sum1,c[n-1]*n-sum1)<<endl;
  	}
}
