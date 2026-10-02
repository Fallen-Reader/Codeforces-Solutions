#include<bits/stdc++.h>
using namespace std;
#define int long long

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n,x;cin >> n>> x;
        vector<int> a(n);
        for(int &val : a) cin >> val;
        if(x==1){cout<<0<<"\n";continue;}
        vector<int> div;
        for(int i =1;i*i <=x;i++){
            if(x%i==0){
                div.push_back(i);
                if(i!=x/i) div.push_back(x/i);
            }
        }
        sort(div.begin(),div.end());
        const int s = div.size();
        vector<int> sum_g(s, 0);
        for (int v : a) {
            int g = std::gcd(v, x);
            int pos = lower_bound(div.begin(), div.end(), g) - div.begin();
            sum_g[pos] += v;
        }
        vector<int> sumD(s, 0);
        for (int i = 0; i < s; i++) {
            int d = div[i];
            if (d == 1) continue;
            for (int j = 0; j < s; j++) {
                if (div[j] % d == 0) {
                    sumD[i] += sum_g[j];
                }
            }
        }
        vector<bool> reachable(s, false);
        reachable[s - 1] = true; // Start at x
        for (int i = s - 1; i >= 0; i--) {
            if (!reachable[i]) continue;
            int d = div[i];
            for (int j = 0; j < s; j++) {
                if (sum_g[j] == 0) continue;
                int g = std::gcd(d, div[j]);
                if (g > 1) {
                    int pos = lower_bound(div.begin(), div.end(), g) - div.begin();
                    reachable[pos] = true;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < s; i++) {
            if (div[i] > 1 && reachable[i]) {
                ans = max(ans, sumD[i]);
            }
        }
        cout << ans << "\n";
    }
    return 0; 
}