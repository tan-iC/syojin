#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;

int main() {
    
    ll a, b, c;
    cin >> a >> b >> c;
 
    string ans = "No";

    if(sqrt(a * a + b * b) < sqrt(c * c)){
        ans = "Yes";
    }

    cout << ans << endl;

    return 0;
}