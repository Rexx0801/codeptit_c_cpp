#include<iostream>
using namespace std;

long long UCLN(long long a, long long b){
	if(b==0) return a;
    return UCLN(b,a%b);
}
struct PhanSo{
	long long a,b;
};
void nhap(struct PhanSo& p){
	cin>>p.a>>p.b;
}
void rutgon(struct PhanSo& p){
	long long gcd=UCLN(p.a,p.b);
	p.a=p.a/gcd;
	p.b=p.b/gcd;
}
void in(struct PhanSo& p){
	cout<<p.a<<"/"<<p.b;
}
int main(){
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
