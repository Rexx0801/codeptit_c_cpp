#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll M = 1e9 + 7;
const ll S = 1e6 + 1;
struct so{
    string va;
    int freq;
};
bool cmp(so a,so b){
    if(a.va.size() == b.va.size())
        return a.va>b.va;
    return a.va.size()>b.va.size();
}
bool check(string s){
    if(s.size()==1) return 0;
    int l=0,r=s.size()-1;
    while(l<=r){
        if(s[l]!=s[r]) return 0;
        l++; 
		r--;
    }
    return 1;
}
int main(){
    so s;
    vector<so> res;
    while((cin>>s.va)){
        if(check(s.va)){
            s.freq=1;
            res.push_back(s);
        }
    }
    sort(res.begin(),res.end(),cmp);
    for(int i=1;i<res.size();i++){
        if(res[i].va==res[i-1].va){
            res[i].freq+=res[i-1].freq;
            res[i-1].freq=0;
        }
    }
    for(int i=0;i<res.size();i++)
        if(res[i].freq!=0) cout<<res[i].va<<" "<<res[i].freq<<endl;
}
