#include<bits/stdc++.h>
using namespace std;
#define int long long

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n;cin >>n;
        vector<int> prem(n);
        unordered_map<int,int> pos;
        for(int i =0;i<n;i++)cin >> prem[i];

        vector<int> p,v;
        for(int i = 0;i<n;i++){
            if(prem[i]!=i+1){
                p.push_back(i+1);
                v.push_back(prem[i]);
            }
        }
        int k = p.size();
        bool ok = (k%2==0);
        if(ok){
            for(int i = 0;i<k && ok;i++) if(v[i]!=p[k-1-i]) ok = false;
        }
        cout<<(ok?"YES":"NO")<<"\n";
    }
    return 0;
}