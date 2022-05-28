#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;
ll A[110];

int main() {
    ll R, X, Y;
    cin >> R >> X >> Y;

    ll ans = 0;

    double dis = sqrt(X * X + Y * Y);

    if(dis < R){
        ans = 2;
    }
    else{
        while(dis > 0){
            dis -= R;
            ans++;
        }
    }
    
    
    cout << ans << endl;

    return 0;
}