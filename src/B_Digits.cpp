#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int ans = 0;

    while(pow(K, ans) <= N){
        ans++;
    }

    cout << ans << endl;

    return 0;
}