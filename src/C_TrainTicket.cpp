#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;

int main() {
    ll N;
    cin >> N;
    vector<ll> c(4);
    ll k = c.size();

    for(int i = 0; i < k; i++){
        c[k - 1 - i] = N % 10;
        N /= 10;
    }

    string ans;

    for(int bit = 0; bit < (1 << 3); bit++){
        bitset<3> bs(bit);
        pair<int, string> tmp(c.at(0), to_string(c.at(0)));

        for(int i = 0; i < 3; i++){
            if(bs.test(i)){
                tmp.first += c.at(i + 1);
                tmp.second += '+' + to_string(c.at(i + 1));
            }
            else{
                tmp.first -= c.at(i + 1);
                tmp.second += '-' + to_string(c.at(i + 1));
            }
        }

        if(tmp.first == 7){
            ans = tmp.second;
            break;
        }
    }

    cout << ans << "=7" << endl;

    return 0;
}