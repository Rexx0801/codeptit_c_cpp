#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int dem=0,sum=0;
	for(int i=a;i<b;i++){
		for(int j=2;j<=i;j++){
            while(i%j==0){
                sum+=j;
                i=i/j;
            }
        }
        if(sum>i){
        	dem++;
		}
	}
	cout<<dem;
}
