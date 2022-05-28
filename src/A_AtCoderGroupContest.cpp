#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long a[3 * N];
    for(int i = 0; i < 3 * N; i++){
        cin >> a[i];
    }

    sort(a, a + 3 * N, greater<int>());
    long long ans = 0;

    for(int i = 0; i < N; i++){
        ans += a[2 * i + 1];
    }
    
    cout << ans << endl;

    return 0;
}