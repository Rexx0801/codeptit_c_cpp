#include <iostream>
using namespace std;
typedef unsigned long int lli;

lli ucln(lli a, lli b) {
    lli tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
lli bcnn(lli a, lli b) {
    return (a*b)/ucln(a,b);
}

int main () {
    int t;
    lli n;
	cin>>t;
    while (t--) {
    	cin>>n;
    	int k=1;
    	for (int i=1;i<=n;i++) {
    		k=bcnn(k,i);
		}
		cout<<k<<endl;
	}
    return 0;
}
