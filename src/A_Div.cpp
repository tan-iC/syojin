#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;
ll A[110];

ll fact(ll a){
    if(a == 1){
        return 1;
    }
    else{
        return a * fact(a - 1);
    }
}

int main() {
    ll N;
    cin >> N;
    ll ans = 1;

    if(N == 1){
        ans = 0;
    }
    else if(N == 2){
        ans = 1;
    }
    else{
        ll tmp = N - 2;
        ans = fact(tmp + 1) / fact(tmp);
    }

    cout << ans << endl;

    return 0;
}