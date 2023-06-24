#include<bits/stdc++.h>
using namespace std;

struct ThiSinh{
	string hoten,ngaysinh;
	double d1,d2,d3,tong;
};
void nhap(ThiSinh&a){
	getline(cin,a.hoten);
	getline(cin,a.ngaysinh);
	cin>>a.d1>>a.d2>>a.d3;
	a.tong=a.d1+a.d2+a.d3;
}
void in(ThiSinh&a){
	cout<<a.hoten<<" "<<a.ngaysinh<<" "<<fixed<<setprecision(1)<<a.tong;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
