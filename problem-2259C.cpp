#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        vector<int> cand;   
        vector<int> hard; 
        for(int i=0;i<n;i++){
            if(a[i] != 0){
                cand.push_back(i);
                if(a[i] == 1) hard.push_back(i);
            }
        }

        int bestLen = 0, bestI = -1, bestJ = -1;

        if(cand.empty()){
            
        }
        else if(hard.empty()){
            
            int i = cand.front(), j = cand.back();
            bestLen = j - i + 1;
            bestI = i; bestJ = j;
        }
        else {
            
            for(int k = 0; k + 1 < (int)hard.size(); k++){
                int len = hard[k+1] - hard[k] + 1;
                if(len > bestLen){ bestLen = len; bestI = hard[k]; bestJ = hard[k+1]; }
            }
            {
                int i = cand.front(), j = hard.front();
                int len = j - i + 1;
                if(len > bestLen){ bestLen = len; bestI = i; bestJ = j; }
            }
            {
                int i = hard.back(), j = cand.back();
                int len = j - i + 1;
                if(len > bestLen){ bestLen = len; bestI = i; bestJ = j; }
            }
        }

        vector<int> res(n, 0);
        for(int i=0;i<n;i++) if(a[i] == 1) res[i] = 1;   

        if(bestI != -1){
            res[bestI] = 1;
            res[bestJ] = 1;
            for(int p = bestI+1; p < bestJ; p++) res[p] = 0; 
        }

        for(int i=0;i<n;i++) cout << res[i] << " \n"[i==n-1];
    }
}