#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string hoten,gioitinh,ngaysinh,diachi,maso,hopdong;
};
struct NhanVien ds[50];
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
int dem=0;
void nhap(NhanVien&p){
	if(dem==0) cin.ignore();
	getline(cin,p.hoten);
	getline(cin,p.gioitinh);
	getline(cin,p.ngaysinh);
	getline(cin,p.diachi);
	getline(cin,p.maso);
	getline(cin,p.hopdong);
	dem++;
}
void inds(NhanVien ds[],int n){
	for(int i=0;i<n;i++){
		if(i+1<10) cout<<"0000"<<i;
		else cout<<"000"<<i;
		cout<<" "<<ds[i].hoten<<" "<<ds[i].gioitinh<<" ";
		ngay(ds[i].ngaysinh);
		cout<<" "<<ds[i].diachi<<" "<<ds[i].maso<<" ";
		ngay(ds[i].hopdong);
		cout<<"\n";
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
