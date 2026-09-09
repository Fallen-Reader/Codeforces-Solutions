#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define int long long

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> res;
        int max_c=0;
        if(n%2!=0) max_c =1;
        else{
            int r =1;
            while(n%r==0) r++;
            max_c = r-1;
        }
        cout<<max_c<<"\n";
    }
}