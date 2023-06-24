#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    string s;
    getline(cin,s);
    int dem=0,kt;
    if(s[0]=='+' && s[1]=='8' && s[2]=='4') {
        dem+=3;
        kt=1;
      }
      else if(s[0]=='8' && s[1]=='4') {
            dem+=2;
            kt=1;
    }
    if(kt==1) {
          cout<<0;
          kt=0;
    }
    for(int i=dem;i<s.length();i++){
      if(s[i]==' ' || s[i]=='-' ||s[i]=='+' || s[i]=='.') continue;
      cout<<s[i];
    }
    cout<<endl;
  }
}
