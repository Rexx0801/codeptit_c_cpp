#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){   
		long long n,k;
        cin>>n>>k;
        long long a[n],b[n],max=0;
        for(int i=0;i<n;i++){
            cin>> a[i];
            if(a[i]<0) max+=a[i]; 
        }
        long long sum=0;
        for(int i=0;i<n-k+1;i++){   
            sum=0;
            for(int j=i;j<i+k;j++){
                sum+=a[j];
            }
            if(sum>max) {
                max=sum;
            }
        }
       	for(int i=0;i<n-k+1;i++){
         	sum=0;
         	for(int j=i;j<i+k;j++){
           		sum+=a[j];
         	}
         	int j=i+k-1;
           	if(sum==max){
             	for(int p=0;p<k;p++){
               		b[p]=a[j--];
             	}
             	break;
           	}
        }
       	for(int i=k-1;i>=0;i--) cout<<b[i]<<" ";
       	cout<<endl;
    }
}
