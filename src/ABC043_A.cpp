#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    // 入力
    int N;   cin >> N;
    int ans = 0;
    for (int i = 1; i <= N; i++){
        ans += i;
    }    
    // 出力
    cout << ans << endl;
    
    return 0;
}
