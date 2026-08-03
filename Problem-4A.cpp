#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    fast_io;
    int w;
    cin>>w;
    cin.ignore();
    if(w%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}