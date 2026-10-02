#include<bits/stdc++.h>
using namespace std;
#define int long long

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n;char c;string s; cin >> n >> c;
        cin.ignore();cin >> s;
        int i = 0,j = n-1;
        int coin =0;
        while(i<j){
            if(s[i]==s[j]){i++;j--;}
            else if(s[i]==c || s[j]==c){coin++;i++;j--;}
            else {coin +=2;i++;j--;}

        }
        cout<<coin<<"\n";
    }
    return 0;
}