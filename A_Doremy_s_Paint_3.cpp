#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        string ans="No";
        if(mp.size()==2){
            auto it=mp.begin();
            int n1=it->second;
            it++;
            int n2=it->second;
            if(abs(n1-n2)<=1){
                ans="Yes";
            }
        }else if(mp.size()==1){
            ans="Yes";
        }
        cout<<ans<<"\n";
    }
    return 0;
}