#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){   
		int n;
        cin>>n;
        long long a[10000],dem=0,Max=1,dem2=0,p,dem3=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){ 
            if(i==0) p=a[i];
            if(a[i]>p) p=a[i];
        }
        long long k=0;
        long long sum=1,b[10000];
        for(int i=0;i<n;i++){
            sum=1;
            for(int j=i;j<n;j++){
              	sum*=a[j];
              	b[k++]=sum;
            }
        }
        sort(b,b+k);
        Max=max(b[k-1],p);
      	cout<<max(Max,p)<<endl;
    }
}


