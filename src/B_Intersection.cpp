#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;
ll A[110];
ll B[110];


int main() {
    
    ll N;
    cin >> N;

    for(ll i = 0; i < N; i++){
        cin >> A[i];
    }
    for(ll i = 0; i < N; i++){
        cin >> B[i];
    }

    ll b = *min_element(B, B + N);
    ll a = *max_element(A, A + N);
    ll ans = 0;
    if(b - a >= 0){
        ans = b - a + 1;
    }

    cout << ans << endl;

    return 0;
}