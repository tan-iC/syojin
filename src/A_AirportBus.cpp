#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N, C, K;
    cin >> N >> C >> K;

    int T[N];
    for(int i = 0; i < N; i++){
        cin >> T[i];
    }
    sort(T, T+N);

    int tmpC = 0;
    int tmpN = T[0];
    int ans = 1;
    for(int i = 0; i < N; i++){
        tmpC++;
        if(tmpC > C || T[i] > tmpN + K){
            tmpN = T[i];
            tmpC = 1;
            ans++;
        }
    }
        
    cout << ans << endl;

    return 0;
}