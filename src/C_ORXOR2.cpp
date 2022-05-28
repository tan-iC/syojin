#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;
ll A[110];

int main() {
    ll N;
    cin >> N;

    for(ll i = 0; i < N; i++){
        cin >> A[i];
    }

    ll ans;
    
    for(ll bit = 0; bit < (1 << (N - 1)); bit++){
        bitset<31> bs(bit);
        ll xored = 0;
        ll ored = 0;

        for(int i = 0; i <= N; i++){
            if(i < N){
                ored |= A[i];
            }
            if(bs.test(i) || i == N){
                xored ^= ored;
                ored = 0;
            }
        }

        if(bit == 0){
            ans = xored;
        }
        else{
            if(ans > xored){
                ans = xored;
            }
        }
    }

    cout << ans << endl;

    return 0;
}