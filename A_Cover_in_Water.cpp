#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int mx=0;
        int count=0;
        int countdot=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                countdot++;
                count++;
                mx=max(count,mx);
            }else{
                count=0;
            }
        }
        if(mx>=3){
            cout<<2<<"\n";
        }else{
            cout<<countdot<<"\n";
        }
    }
    return 0;
}