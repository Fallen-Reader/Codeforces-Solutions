#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define MAX 2000
int main(){
    fast_io;
    int t;
    cin>>t;
    int a[MAX];
    while(t--){
        int n;
        cin>>n;
        vector<int> even,odd;
        for(int i =0;i<2*n;i++){
            cin>>a[i];
            if(a[i]%2) odd.push_back(i);
            else even.push_back(i);
        }
        vector<pair<int,int>> res;

        for(int i =0;i+1<odd.size();i+=2) res.push_back({odd[i]+1,odd[i+1]+1});
        for(int i =0;i+1<even.size();i+=2) res.push_back({even[i]+1,even[i+1]+1});

        for(int i=0;i<n-1;i++) cout<<res[i].first<<" "<<res[i].second<<"\n";
    }

    return 0;
}