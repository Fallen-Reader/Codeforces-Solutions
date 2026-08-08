#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    int n,m;
    cin >> m >> n;
    int dominoes = floor((m*n)/2);
    cout<<dominoes<<endl;
}