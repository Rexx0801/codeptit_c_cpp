#include<bits/stdc++.h>
using namespace std;

void ngaySinh(string s){
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
struct SinhVien{
    string masv,hoten,lop,ngaysinh;
    double gpa;
};
void nhap(SinhVien&p){
    p.masv="B20DCCN001";
    getline(cin,p.hoten);
    getline(cin,p.lop);
    getline(cin,p.ngaysinh);
    cin>>p.gpa;
}
void in(SinhVien&p){
    cout<<p.masv<<" "<<p.hoten<<" "<<p.lop<<" ";
    ngaySinh(p.ngaysinh);
    cout<<fixed<<setprecision(2)<<p.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
