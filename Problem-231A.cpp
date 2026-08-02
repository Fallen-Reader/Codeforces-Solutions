#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    fast_io;
    int n;
    cin>>n;
    cin.ignore();
    int count =0;
    for(int i = 0;i<n;i++){
        int p,v,t;
        string line;
        getline(cin,line);
        if(!line.empty()){
            p = line[0]-'0';
            v = line[2]-'0';
            t = line[4]-'0';
        }
        if(p+v+t>=2){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}