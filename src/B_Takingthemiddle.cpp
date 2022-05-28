#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = int64_t;
const int MAX = 100010;


int main() {
    ll N;
    cin >> N;

    ll ans = 0;

    vector<ll> v(2 * N);
    vector<ll> n(2 * N);
    for(ll i = 0; i < 2 * N; i++){
        cin >> v[i];
        n[i] = i + 1;
    }

    for(ll i = 0; i < N; i++){
        ans += *max_element(v.begin(), v.end());
        v.erase(max_element(v.begin(), v.end()));

        ll index = distance(v.begin(), max_element(v.begin(), v.end()));
        n.erase(n.begin() + index);
        
        v.erase(v.begin() + (n.size() / 2));
        n.erase(n.begin() + (n.size() / 2));
        
    }


    cout << ans << endl;

    return 0;
}