#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[16]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D','\0'};
    char b[16]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B','\0'};
    int t;
    cin>>t;
    int maDe;
    char dapAn[16];
    while(t--){
        cin>>maDe;
        for(int i=0;i<15;i++){
            cin>>dapAn[i];
        }
        int dem=0;
        if(maDe==101){
            for(int i=0;i<15;i++){
                if(dapAn[i]==a[i]){
                    dem++;
                }
            }
        }
        else if(maDe == 102){
            for(int i=0;i<15;i++){
                if(dapAn[i]==b[i]){
                    dem++;
                }
            }
        }
        double diem=(10.0/15)*dem;
        cout<<fixed<<setprecision(2)<<diem<<endl;
    }
}
