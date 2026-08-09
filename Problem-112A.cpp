#include<iostream>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    fast_io;
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),[](unsigned char c){return tolower(c);});
    transform(s2.begin(),s2.end(),s2.begin(),[](unsigned char c){return tolower(c);});

    if(s1<s2) cout<<"-1"<<endl;
    else if(s1>s2) cout<<"1"<<endl;
    else if(s1==s2) cout<<"0"<<endl;

    return 0;
}