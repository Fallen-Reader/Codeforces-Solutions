#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define int long long

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> nums(n+1);
        for(int i =0;i<n;i++) cin >> nums[i];
        cout<<gcd(nums[0],nums[n-1])<<"\n";
    }
    return 0;
}