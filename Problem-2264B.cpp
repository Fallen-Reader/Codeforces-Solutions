#include<bits/stdc++.h>
using namespace std;
#define int long long

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> a(n);
        for(int i = 0;i<n;i++) cin >> a[i];

        int need = m-1;
        priority_queue<int> heap;
        int sum = 0,best = LLONG_MIN;

        for(int i =0;i<n;i++){
            if(heap.size()==need){
                int score = m*a[i]-sum;
                best = max(best,score);
            }

            if(need == 0) continue;

            if(heap.size()<need){
                heap.push((a[i]));
                sum+=a[i];
            }
            else if( a[i]<heap.top()){
                sum-=heap.top();heap.pop();
                heap.push(a[i]);
                sum += a[i];
                
            }
        }
        cout<<best<<"\n";
    }
}