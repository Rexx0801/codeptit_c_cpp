#include<bits/stdc++.h>
using namespace std;

void dao(int a[],int n){
	int l=0,r=n-1;
	while(l<r){
		int tmp=a[l];
		a[l]=a[r];
		a[r]=tmp;
		++l;
		--r;
	}
}

void sub(char a[],char b[]){
	int n1=strlen(a),n2=strlen(b),n=0;
	int x[n1],y[n1],z[n1];
	for(int i=0;i<n1;i++) x[i]=a[i]-'0';
	for(int i=0;i<n2;i++) y[i]=b[i]-'0';
	dao(x,n1);
	dao(y,n2);
	for(int i=n2;i<n1;i++) y[i]=0;
	int temp=0;
	for(int i=0;i<n1;i++){
		int tmp=x[i]-y[i]-temp;
		if(tmp<0){
			temp=1;
			z[n++]=10+tmp;
		}else{
			z[n++]=tmp;
			temp=0;
		}
	}
	int ok=0;
	for(int i=n-1;i>=0;i--){
		if(ok==0){
			ok=1;
		}
		if(ok) cout<<z[i];
	}
	if(ok==0) cout<<"0";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		char a[1001],b[1001];
		cin>>a>>b;
		if(strlen(a)>strlen(b)||(strlen(a)==strlen(b)&&strcmp(a,b)>0)){
			sub(a,b);
		}else{
			sub(b,a);
		}
		cout<<"\n";
	}
}
