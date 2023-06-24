#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* l;
	node* r;
	node(int x){
		data=x;
		l=NULL;
		r=NULL;
	}
};
typedef node NODE;
void ThemNode(NODE* &t,int x){
	if(t==NULL) {		
		t=new NODE(x);
	}
	else{
		if(x<t->data) ThemNode(t->l,x);
		if(x>t->data) ThemNode(t->r,x);
	}
}
void Duyet_LRN(NODE* &t){
	if(t!=NULL){
		Duyet_LRN(t->l);
		Duyet_LRN(t->r);
		cout<<t->data<<" ";				
	}
}
int main(){	
	int t;
	cin >> t;
	while(t--){	
	    NODE* t=NULL;
		
		int n;
		cin>>n;
		for(int i=0,x;i<n;i++){
			cin>>x;
			ThemNode(t,x);
		}
		Duyet_LRN(t);
		cout<<endl;
	}
}
