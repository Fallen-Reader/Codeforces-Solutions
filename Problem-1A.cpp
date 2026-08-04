#include<iostream>
#include<limits>
#include<vector>
#include<string>
using namespace std;

int main(){
    long long m,n,a;
    cin>>n>>m>>a;
    /*
    if(n%a==0 && m%a ==0){
        tiles = int((m+a-1)/a)*int((n+a-1)/a);
        
    }
    else if(n%a==0 && m%a > 0){
        tiles = int((m+a-1)/a+1)*int((n+a-1)/a);

    }
    else if(n%a>0 && m%a ==0){
        tiles = int((m+a-1)/a)*int((n+a-1)/a+1);
    }
    else if(n%a>0 && m%a>0){
        tiles = int((m+a-1)/a+1)*int((n+a-1)/a+1);  
    }
    */
    long long tilesX = (n + a - 1) / a;
    long long tilesY = (m + a - 1) / a;

    cout << tilesX * tilesY << endl;
}