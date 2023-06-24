#include<iostream>
using namespace std;

long long giaiThua(long long n){
	if(n==1) return 1;
	return n*giaiThua(n-1);
}

int main(){
	long long n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum=giaiThua(i)+sum;
	}
	cout<<sum;
}
