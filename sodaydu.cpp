#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int check[10];
        for(int i='0';i<='9';i++) check[i] = 0;
        int dem=0;
        if(s[0]=='0'){
			dem++;
		}
        for(int i=0;i<s.size();i++){
            if(s[i]<'0'||s[i]>'9'){
                dem++;
                break;
            }else{
                check[s[i]]=1;
            }
        }
        if(dem!=0){
         	cout<<"INVALID\n";
        }else{
            int dem1=0;
            for(int i='0';i<='9';i++){
                if(check[i]==0)
                    dem1++;
            }
            if(dem1==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
}
