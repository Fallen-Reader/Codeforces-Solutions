#include<iostream>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    fast_io;
    unsigned int  k,n,w;
    cin>> k >> n >> w;
    unsigned int sum = w*k*(1+w)/2;
    int borrow = sum - n;
    if(borrow<=0) cout<<"0"<<endl;
    else cout<<borrow<<endl;
    return 0;
}