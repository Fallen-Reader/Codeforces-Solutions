#include<bits/stdc++.h>
using namespace std;
#define int long long

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);

int32_t main(){
    fast_io;
    int t;cin >> t; 
    while(t--){
        int n; cin >>n;
        vector<int> a(3);
        for(int i = 0;i<3;i++) cin  >> a[i];

        int m = min({a[0],a[1],a[2]});
        int t = n-m;
        cout<<t<<"\n";
    }
    return 0;
}