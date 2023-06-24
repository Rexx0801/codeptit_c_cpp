#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll M = 1e9 + 7;
const ll S = 1e6 + 1;
ll a[62] = {};
ll gcd(ll a,ll b){
    ll tmp;
    while(b){
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}
ll luythua(ll a,ll b){
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==0){
        ll s=luythua(a,b/2);
        return s*s%M;
    }else{
        ll s=luythua(a,b-1);
        return s*a%M; 
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
		cin>>n;
        ll s=1;
        int tmp=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s*=a[i];
            s%=M; 
            tmp=gcd(a[i],tmp);
        }
        ll res=luythua(s,tmp);
        cout<<res;
        cout<<endl;
    }
}
