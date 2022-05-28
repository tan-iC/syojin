#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;
string S[110];

int main() {
    ll H, W, X, Y;
    cin >> H >> W >> X >> Y;

    for(int i = 0; i < H; i++){
        cin >> S[i];
    }

    ll ans = 0;
    ll x = X - 1;
    ll y = Y - 1;

    if(S[x][y] == '.'){
        ans++;
    }

    while(S[x - 1][Y - 1] == '.' && x > 0){
        ans++;
        x--;
    }
    x = X - 1;
    while(S[x + 1][Y - 1] == '.' && x < H - 1){
        ans++;
        x++;
    }

    while(S[X - 1][y - 1] == '.' && y > 0){
        ans++;
        y--;
    }
    y = Y - 1;
    while(S[X - 1][y + 1] == '.' && y < W - 1){
        ans++;
        y++;
    }

    cout << ans << endl;

    return 0;
}