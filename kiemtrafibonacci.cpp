#include<stdio.h>
int ch(int m,int b[],int t){
	for(int i=0;i<m;i++){
		if(t==b[i])
			return 0;
	}
	return 1;
}

int dem(int x,int n,int a[]){
	int d=0;
	for(int i=0;i<n;i++){
		if(x==a[i])
			d++;
	}
	return d;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	int b[n];
	int m=0,d=0;
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i = 0;i<n;i++){
		if(ch(m,b,a[i])&&dem(a[i],n,a)>1){
			b[m++]=a[i];
			d++;
		}
	}
	printf("%d\n",d);
	for(int i = 0; i <m;i++)
		printf("%d ",b[i]);
}
