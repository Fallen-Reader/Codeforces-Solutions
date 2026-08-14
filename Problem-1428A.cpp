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
    while(t--){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1==x2||y1==y2) cout<<abs(x1-x2)+abs(y1-y2)<<"\n";
        else cout<<abs(x1-x2)+abs(y1-y2)+2<<"\n";
    }
    return 0;
}