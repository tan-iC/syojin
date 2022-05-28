#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 50;

ll t[50][50];
ll p[50][50];
bool passed[2500] = {false};

void passing(ll t){
    passed[t] = true;
}

int main() {
    
    ll si, sj;
    cin >> si >> sj;

    string ans = "";

    for(ll i = 0; i < MAX; i++){
        for(ll j = 0; j < MAX; j++){
            cin >> t[i][j];
        }
    }
    for(ll i = 0; i < MAX; i++){
        for(ll j = 0; j < MAX; j++){
            cin >> p[i][j];
        }
    }

    ll a, b;
    a = si;
    b = sj;

    passing(t[a][b]);


    

    cout << ans << endl;

    return 0;
}