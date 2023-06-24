#include<bits/stdc++.h>

using namespace std;
int t,n,kt[1005],a;
int main() {
    cin>>t;
    int f0=0,f1=1;
    kt[0]=kt[1]=1;
    while (f1<=1000) {
        int c=f0+f1;
        f0=f1;
        f1=c;
        kt[f1]=1;
    }
    while (t--) {
        cin>>n;
        for (int i=1;i<=n;i++) {
            cin>>a;
            if (kt[a]) cout<<a<<" ";
        }
        cout<<"\n";
    }
}
