#include <bits/stdc++.h>
using namespace std;
struct GiaoVien{
 	string msv,ten;
 	int lcb;
};
void nhapThongTinSV(struct GiaoVien&a){
  	getline(cin,a.msv);
  	getline(cin,a.ten);
    cin>>a.lcb;
}
void inThongTinSV(struct GiaoVien a){
  	cout<<a.msv<<"  "<<a.ten<<" ";
  	int k=stoi(a.msv.substr(2,2));
  	cout<<k<<" ";
  	string e=a.msv.substr(0,2);
  	if(e=="HT")cout<<"2000000"<<" "<<a.lcb*k+2000000;
    if(e=="HP")cout<<"900000"<<"  "<<a.lcb*k+900000;
  	if(e=="GV")cout<<"500000"<<" "<<a.lcb*k+500000;
}
int main(){
    struct GiaoVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
