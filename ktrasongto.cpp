#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,dem=0;
	cin>>n;
	if(n>1){
	    for(int i=2;i<=sqrt(n);i++){
		    if(n%i==0){
		    	dem++;
		    }
	    }if(dem==0){
	        cout<<"YES"<<endl;
	    }else{
		    cout<<"NO"<<endl;
	    }
	}else{
		cout<<"NO"<<endl;
	}
}
