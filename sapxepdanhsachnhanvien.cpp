#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
  	string ten,gioitinh,ngaysinh,diachi,mathue,ngayky;
  	int manhanvien;
  	int ngay,thangsinh,namsinh;
};
int dem=0;
void nhap(NhanVien&a){
  	if(dem==0) cin.ignore();
  	getline(cin,a.ten);
  	getline(cin,a.gioitinh);
  	getline(cin,a.ngaysinh);
  	getline(cin,a.diachi);
  	getline(cin,a.mathue);
  	getline(cin,a.ngayky);
  	dem++;
  	a.manhanvien=dem;
}
bool cmp(NhanVien A,NhanVien B){
  	if(A.thangsinh==B.thangsinh&&A.namsinh==B.namsinh)
    	return A.ngay<B.ngay;
  	else if(A.namsinh==B.namsinh) 
        return A.thangsinh<B.thangsinh;
    return A.namsinh<B.namsinh;
}
void sapxep(NhanVien a[],int n){
    for(int i=0;i<n;i++){
      	stringstream ss(a[i].ngaysinh);
      	int dem=0;
      	string tmp="";
      	while(getline(ss,tmp,'/')){
        	dem++;
        	if(dem==1) a[i].thangsinh=stoi(tmp);
        	if(dem==2) a[i].ngay=stoi(tmp);
        	if(dem==3) a[i].namsinh=stoi(tmp);
      	}
    }
  	sort(a,a+n,cmp);  
}
void inds(NhanVien a[100],int n){
  	for(int i=0;i<n;i++){
  	if(a[i].manhanvien<10) cout<<"0000"<<a[i].manhanvien;
  	else cout<<"000"<<a[i].manhanvien;
  	cout<<" "<<a[i].ten<<" "<<a[i].gioitinh<<" "<<a[i].ngaysinh<<" "<<a[i].diachi<<" "<<a[i].mathue<<" "<<a[i].ngayky<<endl;
  	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

