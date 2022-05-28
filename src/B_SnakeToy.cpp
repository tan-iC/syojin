#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int l[N];
    for(int i = 0; i < N; i++){
        cin >> l[i];
    }

    int ans = 0;
    sort(l, l+N, greater<int>());

    for(int i = 0; i < K; i++){
        ans += l[i];
    }
    
    cout << ans << endl;

    return 0;
}