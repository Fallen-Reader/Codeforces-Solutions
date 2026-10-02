#include<bits/stdc++.h>
using namespace std;
#define int long long

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        map<int,int> f; int MAX = 0;
        for(int i =0;i<n;i++){
            cin >> a[i];
            f[a[i]]++;
            MAX = max(MAX,f[a[i]]);
        }

        vector<vector<int>> b(MAX);
        for(auto const&[val,c]:f){
            for(int i = 0;i<c;i++){b[i].push_back(val);}
        }

        vector<int> res;
        res.reserve(n);
        for(int i =0;i<MAX;i++){
            sort(b[i].begin(),b[i].end(),greater<int>());
            for(int val : b[i]) res.push_back(val);
        }

        for(int i =0;i<n;i++){ cout<< res[i]<< (i==n-1?"\n":" ");}
    }
    return 0;
}