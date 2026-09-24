#include<bits/stdc++.h>
using namespace std;
#define int long long

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n+1);
        for(int i = 1;i<=n;i++) cin >> a[i];

        vector<int> dif(n+1,0);

        for(int i = 1;i<=n;i++){
            int L = i*a[i];
            if(L>=n) continue;
            int R = min(n-1,L+i-1);
            dif[L] +=1;
            dif[R+1] -=1;
        }

        vector<int> B;
        int run = 0;
        for(int i =0;i<n;i++){
            run+= dif[i];
            if(run == 0)B.push_back(i);
        }
        cout<<B.size()<<"\n";
        for(size_t i = 0;i<B.size();i++) cout<<B[i]<<" \n"[i+1==B.size()];
        if(B.empty()) cout<< "\n";
    }

    return 0;
}