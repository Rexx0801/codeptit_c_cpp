#include<bits/stdc++.h>
using namespace std;

long long ucln(long long a,long long b){
	if(b==0) return a;
	return ucln(b,a%b);
}
struct PhanSo{
	long long a,b;
};
void nhap(struct PhanSo& p){
	cin>>p.a>>p.b;
}
void rutgon(struct PhanSo& p){
	long long gcd=ucln(p.a,p.b);
	p.a=p.a/gcd;
	p.b=p.b/gcd;
}
PhanSo tong(struct PhanSo& p,struct PhanSo& q){
	PhanSo x;
	x.a=p.a*q.b+q.a*p.b;
	x.b=p.b*q.b;
	rutgon(x);
	return x;
}
void in(struct PhanSo& p){
	cout<<p.a<<"/"<<p.b;
}
int main() {
	struct PhanSo p,q;
	nhap(p); 
	nhap(q);
	PhanSo t=tong(p,q);
	in(t);
	return 0;
}
