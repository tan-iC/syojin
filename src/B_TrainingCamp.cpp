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

    ll c = 1000000000 + 7;
    ll ans = 1;

    for(ll i = 1; i <= N; i++){
        if(ans * i > c){
            ans = (ans * i) % c;
        }
        else{
            ans = ans * i;
        }
    }

    cout << ans << endl;

    return 0;
}