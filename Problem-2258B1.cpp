#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define int long long

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n,m;cin >> n >> m;
        vector<int> carrots(n);
        for(int i =0;i<n;i++) cin >> carrots[i];
        sort(carrots.begin(),carrots.end());

        map<int,int> f;
        for(int x: carrots) f[x]++;

        set<int> can;
        for(int x:carrots){
            can.insert(x);
            if(x%2==0) can.insert(x/2);
        }

        int res =0;
        for(int l:can){
            if(l==0) continue;
            int count = carrots.end() - lower_bound(carrots.begin(),carrots.end(),l);

            auto it = f.find(2*l);
            if(it != f.end()) count += it->second;

            res = max(res,count);
        }

        cout<<res<<"\n";

    }
    return 0;
}