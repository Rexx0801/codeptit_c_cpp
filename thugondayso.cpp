#include <bits/stdc++.h>
using namespace std;

int XL(int a[],int n){
    stack <int> p1;
    for(int i=0;i<n;i++){
        if(p1.empty()or(a[i]+p1.top())%2)
            p1.push(a[i]);
        else p1.pop();
    }
    return p1.size();
}
int main(){
    int n; 
	cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<XL(a,n);
    return 0;
}
