#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);

int main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int b =0;
        if(n%2==0) b =n;
        else b = n-1;
        int a = n/2;
        cout<<gcd(a,b)<<"\n";
    }
    return 0;
}