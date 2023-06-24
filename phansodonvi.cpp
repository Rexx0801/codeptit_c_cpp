#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu,mau;
};

void Subtract(PhanSo &a,long long &b,long long &first){
	long long TU=a.tu*b-a.mau;
	if(TU<0){
		b++;
		return;
	}else{
		if(first!= 0) cout<<"+ ";
		else first++;
		cout<<1<<"/"<<b<<' ';
		long long MAU=a.mau*b;
		long long UCLN=__gcd(TU,MAU);
		a.tu=TU/UCLN;
		a.mau=MAU/UCLN;
		if(a.tu!=0)b=a.mau/a.tu;
	}
}
int main(){
	int t; 
	cin>>t;
	while(t--){
		PhanSo a;
		long long first=0,i=2;
		cin>>a.tu>>a.mau;
		while(a.tu>0){
			Subtract(a,i,first);
		}
		cout<<endl;
	}
}
