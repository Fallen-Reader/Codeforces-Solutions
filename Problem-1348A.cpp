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
        int n;
        cin>>n;
        vector<int> squares(n);
        int k =1;
        for(int i =0;i<n;i++){
            squares[i] = 1<<k;
            k++;
        }
        int a = squares[n-1];
        for(int i =0;i<=n/2-2;i++){
            a+= squares[i];
        }
        int b =0;
        for(int i =n/2-1;i<n-1;i++){
            b+=squares[i];
        }
        int diff = abs(a-b);
        cout<<diff<<"\n";
    }
    return 0;

}