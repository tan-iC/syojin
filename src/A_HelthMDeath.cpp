#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;

int main() {
    int M, H;
    cin >> M >> H;
    
    string ans;
    if(H % M == 0){
        ans = "Yes";
    }
    else{
        ans = "No";
    }
    
    cout << ans << endl;

    return 0;
}