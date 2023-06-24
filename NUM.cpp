/***********************
	Name: NUM.CPP
	Copyright: (C) 2021
	Author: Devc Fan
	Date: 11/10/21 20:40
	Description:
	Some algorithms on integers
	Complexity (Do phuc tap)
	
	S1. Encapsulate
	S2. IBM Clean Room Ky nghe Phong sach
		a) Emty prog is a CR
		b) 11: 1 lenh/ lan het loi
	S3. Atom Chia nho doi tuong / View
	S4. Bam sat cung tien
	S5. Dat ten de goi
	S6. Reusing = Tai su dung
		
***********************/

#include<iostream>
using namespace std;

typedef long long Long; // 64 bit
/*--------------
	Lat 1 so nguyen
	Rev(1024) = 4201
	Rev(2000) = 2
	[1][2][3][4] -> [4][3][2][1]
		Rule: Lay phai ghep phai
		Lay hang don vi / ghep vao hang don vi
	
--------------*/
Long Rev(Long x){
	Long y=0;
	while(x!=0){
		y=y*10+(x%10);
		x/=10;
	}
	return y;
}

/*--------------
	Palindrome / so doi xung / so ganh / so can
	trai = phai
	VD:
		1003001, 341143, 2 : Pal
		203 : no
--------------*/
bool Pal(Long x){
	return x==Rev(x);
}

void Test(){
	int x=1234321;
//	cout<<"\n"<<x<<"->"<<Rev(x);
	cout<<"\n"<<x<<"is Pal ? "<<Pal(x);
}

main(){
	Test();
	cout<<"\n T h e   E n d";
	return 0;
}
