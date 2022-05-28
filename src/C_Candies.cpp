#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(2, vector<int>(N));
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }
    
    int ans;
    int cnt[N] = {0};
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){
            cnt[i] += A[0][j];
        }
        for(int j = i; j < N; j++){
            cnt[i] += A[1][j];
        }
    }
    sort(cnt, cnt+N);
    ans = cnt[N - 1];

    cout << ans << endl;

    return 0;
}