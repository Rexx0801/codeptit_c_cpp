#include<bits/stdc++.h>
using namespace std;
int main(){
  	int t;
  	cin>>t;
  	while(t--){
  		long long n,mang[5000],dem=0;
  		cin>>n;
  		for(int i=0;i<n;i++){
    		cin>>mang[i];
    		mang[i]*=mang[i];
  		}
  		sort(mang,mang+n);
  		for(int i=0;i<n;i++){
    		for(int j=i+1;j<n;j++){
      			if(binary_search(mang,mang+n,mang[i]+mang[j])) dem++;
      			if(dem!=0) break;
    		}
    		if(dem!=0) break;
  		}
  		if(dem==0)cout<<"NO"<<endl;
  		else cout<<"YES"<<endl;
  	}
}
