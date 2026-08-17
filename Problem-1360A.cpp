#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    fast_io;
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int side  = min(max(2*a,b),max(a,2*b));
        cout<<side*side<<"\n";
    }
    return 0;
}