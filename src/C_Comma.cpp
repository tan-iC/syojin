#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;

int main() {
    ll N;
    cin >> N;
    
    ll ans = 0;
    ll bass = 1000;

    while(N / bass > 0){
        if(N >= bass){
            ans += N - bass + 1;
        }
        bass *= 1000;
    }

    cout << ans << endl;

    return 0;
}