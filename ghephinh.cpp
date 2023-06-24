#include <bits/stdc++.h>
using namespace std;

struct hcn{
	int max,min;
	int dientich;
};
void doicho(hcn &a){
	if(a.max<a.min){
		int tmp=a.max;
		a.max=a.min;
		a.min=tmp;
	}
}
int main(){
	int t; 
	cin>>t;
	while(t--){
		int max1=0,s=0;
		hcn ds[3];
		for(int i=0;i<3;i++){
			cin>>ds[i].max>>ds[i].min;
			ds[i].dientich=ds[i].max*ds[i].min;
			doicho(ds[i]);
			s+=ds[i].dientich;
			max1=max(ds[i].max,max1);
		}
		if((int)sqrt(s)!=sqrt(s)) cout<<"NO";
		else{
			int a[4],k=0,l=0;
			for(int i=0;i<3;i++){
				if(ds[i].max==max1){
					max1=INT_MIN;
				}else{
					a[k++]=ds[i].max; 
					a[k++]=ds[i].min;
				}
			}
			sort(a,a+4);
			int dem=0;
			for(int i=1;i<4;i++){
				if(a[i]==a[i-1]) dem++;
			}
			if(dem>0) cout<<"YES";
			else cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}
