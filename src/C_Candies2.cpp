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
    int w[2][100] = {0};
    w[0][0] = A[0][0];
    w[1][0] = w[0][0] + A[1][0];

    //とりあえず上の段を埋める
    for(int i = 1; i < N; i++){
        w[0][i] = w[0][i - 1] + A[0][i];
    }

    //下の段の最大を採用する
    for(int i = 1; i < N; i++){
        w[1][i] = max(w[0][i], w[1][i - 1]) + A[1][i];
    }

    ans = w[1][N - 1];
    
    cout << ans << endl;

    return 0;
}