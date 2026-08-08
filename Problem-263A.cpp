#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    int j1,j2,j3,j4,j5;
    int res = 1;
    for (int i =1;i<=5;i++){
        cin >> j1 >> j2 >> j3 >> j4 >>  j5;
        if(j1==1) res = abs(i-3)+abs(1-3);
        else if(j2==1) res = abs(i-3)+abs(2-3);
        else if(j3==1) res = abs(i-3)+abs(3-3);
        else if(j4==1) res = abs(i-3)+abs(4-3);
        else if(j5==1) res = abs(i-3)+abs(5-3);
    }
    cout<<res<<endl;
    return 0;
}