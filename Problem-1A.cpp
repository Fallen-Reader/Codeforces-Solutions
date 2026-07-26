#include<iostream>
#include<limits>
#include<vector>
#include<string>
using namespace std;
/*
void multiplyNumericStrings(string num1,string num2) {
    if (num1 == "0" || num2 == "0") cout<<"0"<<endl;;
    
    int n = num1.size();
    int m = num2.size();
    std::vector<int> result(n + m, 0);

    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];

            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;    
        }
    }

    string final_str = "";
    int i = 0;
    while (i < result.size() && result[i] == 0) i++;
    while (i < result.size()) final_str += to_string(result[i++]);

    cout<<final_str<<endl;
}
*/

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