#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;

int main() {
    string S;
    cin >> S;

    string ans = "";

    for(int i = 1; i < S.size(); i++){
        ans += S[i];
    }
    ans += S[0];

    cout << ans << endl;

    return 0;
}