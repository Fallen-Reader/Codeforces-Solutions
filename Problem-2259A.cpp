#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define int long long

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n,k ; cin >> n >> k;
        string s ; cin >>s;
        int schools_needed = 0;
        for(int i = 0; i < n; i += k){
            string block = s.substr(i, k);
            if(block.find('0') == string::npos) schools_needed++;
        }
        cout << schools_needed << "\n";
    }

}