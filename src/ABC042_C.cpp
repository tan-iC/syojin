#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

bool isA(int A, int *d, int s_d){
    // Aがdの中にあったらtrue
    bool f = false;

    for (int i = 0; i < s_d; i++){
        if (A == d[i]){
            f = true;
            break;
        }
    }
    return f;
}

bool isIn(int num, int *d, int s_d){
    // 一桁目を順に調べる
    bool f = false;

    while((num > 0)){
        // 一桁目
        int A = (num % 10);

        // 一桁目がdにあるか
        if (isA(A, d, s_d)) {
            f = true;
            break;
        }

        // 桁をずらす
        num = num / 10;
    }

    return f;
}


int main(){
    // 入力
    int N, K;   cin >> N >> K;
    int D[K];
    int ans = N;

    for (int i = 0; i < K; i++){
        int t; cin >> t;
        D[i] = t;
        // cout << t;
    }

    while (true)
    {
        // あれば増やす
        if(isIn(ans, D, K)){
            ans++;
        }
        // なければ終了
        else{
            break;
        }
        // cout << ans;
    }

    // 出力
    cout << ans << endl;
    
    return 0;
}
