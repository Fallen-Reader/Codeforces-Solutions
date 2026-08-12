#include<iostream>
#include<algorithm>
#include<cmath>
#include<cctype>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    fast_io;
    int x;
    cin>>x;
    int step =ceil(x/5.0);
    cout<<step<<endl;
    return 0;
}