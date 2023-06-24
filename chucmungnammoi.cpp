#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string a[100000];
    int b[100000]={0};
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,a[i]); 
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]) b[j]=1;
        }
    }
    int dem=0;
    for(int i=0;i<n;i++){
        if(b[i]==0) dem++;
    }
    cout<<dem<<endl;
}
