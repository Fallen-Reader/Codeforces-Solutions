#include<bits/stdc++.h>
using namespace std;
#define int long long

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n,k; cin >> n >> k;
        if(k==0|| k<n || k > 2*n-1){
            cout<<"-1"<<"\n";
            continue;
        }
        int m = 2*n -k;
        int extra = n-m;
        vector<vector<int>> mat(n,vector<int>(n,0));
        int c = 1;
        for(int i= 0;i<m;i++) mat[i][i] = c++;
        for(int i= 0;i<extra;i++) mat[m+i][0] = c++;
        for(int j= 0;j<extra;j++) mat[0][m+j] = c++;

        for(int i =0;i<n;i++){
            for(int j =0;j <n;j++){
                if(mat[i][j]==0) mat[i][j] = c++;
            }
        }
        for(int i =0;i<n;i++){
            for(int j =0;j <n;j++){
                cout<< mat[i][j]<<" \n"[j==n-1];
            }
        }
    }
    return 0;
}