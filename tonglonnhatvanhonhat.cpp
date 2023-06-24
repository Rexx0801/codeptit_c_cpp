#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long x1,x2;
		cin>>x1>>x2;
		long long s=x1+x2,x=1,y=1,s1=0,s2=0;
		int a,b;
		while(x1>0){	
			a=x1%10;
			if(a==6) s1=s1+x;
			if(a==5) s2=s2+x;
			x1/=10;
			x*=10;
		}
    	while(x2>0){
			b=x2%10;
			if(b==6) s1=s1+y;
			if(b==5) s2=s2+y;
			x2/=10;
			y*=10;
		}
		long long max=s+s2,min=s-s1;
		cout<<min<<" "<< max;
		cout<<"\n";
	}
}
