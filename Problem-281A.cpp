#include<iostream>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    fast_io;
    string s;
    cin>>s;
    s[0] = toupper(static_cast<unsigned char>(s[0]));
    cout<<s<<endl;
    return 0;
}