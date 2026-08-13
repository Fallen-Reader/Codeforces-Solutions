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
    vector<int> res;
    while(t--){
        int a,b;
        cin >> a >> b;
        res.push_back(min({a,b,(a+b)/3}));
    }
    for(int n : res) cout<<n<<"\n";
    return 0;
}