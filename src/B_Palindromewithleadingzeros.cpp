#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;
ll A[110];

int main() {
    string N;
    cin >> N;

    string ans = "Yes";
    string r;

    bool f = true;
    for(ll i = 0; i < N.size(); i++){
        if(N[N.size() - 1 - i] != '0' && f){
            f = false;
            r += N[N.size() - 1 - i];
        }
        else if(!f){
            r += N[N.size() - 1 - i];
        }
    }

    for(ll i = 0; i < r.size(); i++){
        if(r[i] != r[r.size() - 1 - i]){
            ans = "No";
            break;
        }
    }

    cout << ans << endl;

    return 0;
}