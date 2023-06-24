#include<bits/stdc++.h>
using namespace std;
long long a[1000006];
int main(){
    int t;
    cin>>t;
    while(t--){   
		int n;
        cin>>n;
        int max;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(i==0) max=a[0];
            else if(max<a[i])
                max=a[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
                if(sum+a[i]<0){
                    sum=0;
                    continue;
                }
                sum+=a[i];
                if(sum>max) max=sum;
        }
    	cout<<max<<endl;
    }
}
