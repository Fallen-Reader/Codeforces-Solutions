#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    fast_io;
    int t;
    cin>>t;
    vector<int>res(t);
    for(int sq =0;sq<t;sq++){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i =0;i<n;i++) cin>>arr[i];
        int upper,lower;
        lower = upper = 0;
        for(int i =0;i<n;i++){
            if(arr[i]%2==0 && i%2!=0) upper++;
            else if(arr[i]%2!=0 && i%2==0) lower++;
        }
        if(lower==upper) res[sq] = lower;
        else res[sq]=-1;
    }
    for(int i:res)cout<<i<<"\n";

    return 0;
}