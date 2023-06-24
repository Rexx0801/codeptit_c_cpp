#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while(t--){
		char s[100];
		int stt;
		cin>>stt;
		cin.ignore();
		cin.getline(s,sizeof(s));
		for(int i=0;i<strlen(s);i++) 
			s[i]=tolower(s[i]);
		char s1[100][100];
		int dem=0;
		char *p;
		for(p=strtok(s," ");p!= NULL;p=strtok(NULL," ")){
			p[0]-=32;
			strcpy(s1[dem++],p);
		}
		if(stt==1){
			cout<<s1[dem-1]<<" ";
			for(int i=0;i<dem-1;i++) cout<<s1[i]<<" ";
			cout<<endl;
		}else{
			for(int i=1;i<=dem-1;i++) cout<<s1[i]<<" ";
		}
	}
}


