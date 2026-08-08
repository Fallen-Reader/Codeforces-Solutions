#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    fast_io;
    int n,k;
    string fs;
    cin>> n >> k;
    cin.ignore();
    vector<int> nums(n);
    int players =0;
    for(int i =0;i<n;i++){
        cin >> nums[i];
        if(nums[i]>=nums[k-1] && nums[i]!=0) players++;
    }
    cout<<players<<endl;
    return 0;
}