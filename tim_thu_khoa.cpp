#include<stdio.h>
typedef struct sinhvien {
	char name[30],ngaysinh[30];
	float diem1,diem2,diem3;
	int stt;
}SV;

float tongdiem(SV a){
	return a.diem1+a.diem2+a.diem3;
}

int main(){
	int t;
	SV a[10];
	int d=0;
	scanf("%d",&t);
	while(t--){
		scanf("\n");
		gets(a[d].name);
		gets(a[d].ngaysinh);
		scanf("%f",&a[d].diem1);
		scanf("%f",&a[d].diem2);
		scanf("%f",&a[d].diem3);
		a[d].stt=d+1;
		d++;
	}
	float max = tongdiem(a[0]);
	for(int i=1;i<d;i++){
		if(max<tongdiem(a[i]))
			max=tongdiem(a[i]);
	}
	for(int i=0;i<d;i++){
		if(max==tongdiem(a[i])){
			printf("%d ",a[i].stt);
			printf("%s ",a[i].name);
			printf("%s ",a[i].ngaysinh);
			printf("%.1f",tongdiem(a[i]));
			printf("\n");
		}
	}
}
