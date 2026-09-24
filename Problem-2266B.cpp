#include<bits/stdc++.h>
using namespace std;
#define int long long

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int a,b,c;cin >> a >> b >> c;
        int res  = max(abs(b-a),abs((c+a)-b));
        cout<<res<<"\n";
    }
    return 0;
}