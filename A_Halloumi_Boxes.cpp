#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> num(n);
        int isalreadySorted=1;
        for(int i=0;i<n;i++){
            cin>>num[i];
            if(i>0 && num[i-1]>num[i] && isalreadySorted==1){
                isalreadySorted=0;
            }
        }
        if(k>=2 || isalreadySorted==1){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }   
    }
    return 0;
}