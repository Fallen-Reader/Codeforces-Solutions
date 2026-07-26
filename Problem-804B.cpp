#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cctype>
#include<cmath>
using namespace std;

int main(){
    string s;
    cin>>s;
    int ans =0;
    int b_counts = 0;
    int MOD = pow(10,9)+7;
    reverse(s.begin(),s.end());
    for(char c: s){
        if(c=='b') b_counts = (b_counts+1)%MOD;
        else {
            ans = (ans+b_counts)% MOD;
            b_counts = (2*b_counts)%MOD;
        }
    }
    cout<<ans<<endl;
}