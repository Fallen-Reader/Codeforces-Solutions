#include<bits/stdc++.h>
using namespace std;
#define int long long

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n ;cin>>n;
        string s; cin >> s;
        int count_0 = 0;
        int count_1 = 0;
        if(s[0] == '1'){
            for(char c:s) if(c=='0') count_0++;

            cout<<count_0<<"\n";
            continue;
        }
        int m = s.find('1');
        if(m==string::npos){
            cout << 0<<"\n";
            continue;
        }
        vector<int> p(n+1,0);
        for(int i =0;i<n;i++) p[i+1] = p[i] + (s[i]=='1');
        int res = INT_MAX;

        for(int pos = m ;pos<=n;pos++){
            int ones = p[pos] - p[1];
            int zeros = (n-pos) - (p[n]-p[pos]);

            res = min(res,ones+zeros);
        }
        cout<<res<<"\n";
    }
    return 0;
}