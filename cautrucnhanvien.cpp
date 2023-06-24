#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string hoten,gioitinh,ngaysinh,diachi,maso,hopdong;
};
void ngay(string s){
    string a;
    int k=0;
    if(s[1]=='/')
        s="0"+s;
    for(int i=0;i<s.size();i++){
        a[k++]=s[i];
        if(s[i]=='/'&&s[i+2]=='/')
            a[k++]='0';
    }
    for(int i=0;i<k;i++) cout<<a[i];
    cout<<" ";
}
void nhap(NhanVien&p){
	getline(cin,p.hoten);
	getline(cin,p.gioitinh);
	getline(cin,p.ngaysinh);
	getline(cin,p.diachi);
	getline(cin,p.maso);
	getline(cin,p.hopdong);
}
void in(NhanVien&p){
	cout<<"00001"<<" "<<p.hoten<<" "<<p.gioitinh<<" ";
	ngay(p.ngaysinh);
	cout<<" "<<p.diachi<<" "<<p.maso<<" ";
	ngay(p.hopdong);
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
