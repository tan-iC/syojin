#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    // ε₯ε
    int N;   cin >> N;
    int ans = 0;
    for (int i = 1; i <= N; i++){
        ans += i;
    }    
    // εΊε
    cout << ans << endl;
    
    return 0;
}
