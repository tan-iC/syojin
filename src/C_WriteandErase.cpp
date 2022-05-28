#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
using ll = int64_t;
const int MAX = 100010;

int main() {
    ll N;
    cin >> N;
    
    vector<ll> A;
    map<ll, ll> num;

    ll ans = 0;

    for(ll i = 0; i < N; i++){
        ll in;
        cin >> in;

        if(!num[in] || num[in] == 0){
            num[in]++;
            ans++;
        }
        else{
            num[in]--;
            ans--;
        }
    }

    cout << ans << endl;

    return 0;
}