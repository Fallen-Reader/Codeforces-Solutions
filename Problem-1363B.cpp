#include<bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define int long long

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
      string s;cin>>s;
      int n = s.size();
      int ans = n;
      vector<int> pref1(n+1,0),suf0(n+1,0);
      for(int i =0;i<n;i++) pref1[i+1] = pref1[i] + (s[i]=='1');
      for(int i= n-1;i>=0;i--) suf0[i] = suf0[i+1] + (s[i]=='0');
      for(int i =0;i<=n;i++){
        ans = min(ans,pref1[i]+suf0[i]);
      }

      vector<int> pref0(n+1,0),suf1(n+1,0);
      for(int i =0;i<n;i++) pref0[i+1] = pref0[i]+ (s[i]=='0');
      for(int i =n-1;i>=0;i--) suf1[i] = suf1[i+1]+(s[i]=='1');
      for(int i =0;i<=n;i++){
        ans = min(ans,pref0[i]+suf1[i]);
      }

      cout<<ans<<"\n";
    }
    return 0;
}
