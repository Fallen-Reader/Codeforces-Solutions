#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    fast_io;
    int n;
    cin>>n;
    cin.ignore();
    vector<string> words;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        words.push_back(s);
    }
    for(string s:words){
        int sz = s.size();
        if(sz>10){
            cout<<s[0]<<sz-2<<s[sz-1]<<endl;
        }
        else cout<<s<<endl;
    }
    return 0;
    
}