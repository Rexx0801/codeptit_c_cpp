#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	long long n,i;
	double s;
	s=0;
	cin>>n;
	while(i<=n){
		for(i=1;i<=n;i++){
			s=s+1.0/i;
		}
		printf("%.4lf",s);
	}
}
