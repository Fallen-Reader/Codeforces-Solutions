#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);

#define MAX 50000
bool check_prime(int n){
	for(int i = 2; i < min(n,MAX); i++)
		if(n % i == 0)
			return false;
	return true;
}

int main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        bool l = (n==1);
        if(n>2 && n%2==0){
            if((n &(n-1))== 0) l =true;
            else if(n%4!=0 && check_prime(n/2)) l=true;
        }
        if(l) cout<<"FastestFinger"<<"\n";
        else cout<<"Ashishgup"<<"\n";
    }
    return 0;
}