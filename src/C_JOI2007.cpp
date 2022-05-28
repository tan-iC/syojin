#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;

bool isOK(ll index, ll key, vector<ll> a){
    if(a[index] >= key){
        return true;
    }
    else{
        return false;
    }
}

ll binary_search(ll key, vector<ll> a){
    ll ng = -1;
    ll ok = (ll) a.size();
    while(abs(ok - ng) > 1){
        ll mid = (ok + ng) / 2;

        if(isOK(mid, key, a)){
            ok = mid;
        }
    }
    return ok;
}

int main() {
    ll N, M;
    cin >> N >> M;

    vector<ll> P;

    ll ans = 0;

    for(ll i = 0; i < N; i++){
        ll a;
        cin >> a;
        P[i] = a;
    }

    cout << ans << endl;

    return 0;
}