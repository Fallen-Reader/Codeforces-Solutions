#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void Favsquence(vector<int>& n){
    int l =0,r=n.size()-1;
    for(int i =0;i<n.size();i++){
        if(i%2==0)cout<<n[l++]<<" ";
        else cout<<n[r--]<<" ";
    }  
}

int main(){
    fast_io;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            cin>>res[i];
        }
        Favsquence(res);
        cout<<"\n";
    }
}