#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define int long long

int32_t main(){
    fast_io;
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> nums(n);
        int count_odd =0;
        int count_even_mod_2 =0;
        int count_even_mod_0 =0;
        int max_count =0;
        for(int i =0;i<n;i++){
            cin >> nums[i];
            if(nums[i]%2!=0) count_odd++;
            else if(nums[i]%4==2) count_even_mod_2++;
            else if(nums[i]%4==0) count_even_mod_0++;
        }
        max_count = max({count_odd,count_even_mod_2,count_even_mod_0});
        cout<<max_count<<"\n";
    }
}