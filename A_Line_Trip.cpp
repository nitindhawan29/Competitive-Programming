#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> num(n);
        int mx=0;
        int last=0;
        for(int i=0;i<n;i++){
            cin>>num[i];
            mx=max(num[i]-last,mx);
            last=num[i];
        }
        int diff=2*(x-last);
        mx=max(mx,diff);
        cout<<mx<<"\n";
    }
    return 0;
}