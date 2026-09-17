#include<bits/stdc++.h>
using namespace std;
#define int long long

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);


int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> binarr(n);
        for(int i =0;i<n;i++) cin >> binarr[i];
        int one = count(binarr.begin(),binarr.end(),1);
        cout << (one >= n - one?"Bessie":"Elsie")<<"\n";
    }
    return 0;
}