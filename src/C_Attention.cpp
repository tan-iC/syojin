#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;
int w[3 * MAX] = {0};
int e[3 * MAX] = {0};

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    w[0] = 0;
    e[0] = 0;
    
    for(int i = 1; i <= N; i++){
        if(S[i - 1] == 'W'){
            w[i] = w[i - 1] + 1;
            e[i] = e[i - 1];
        }
        else{
            e[i] = e[i - 1] + 1;
            w[i] = w[i - 1];
        }
    }
    
    int ans;
    ans = e[N] - e[1];
    for(int i = 1; i < N; i++){
        int tmp = e[N] - e[i + 1] + w[i];
        if(ans > tmp){
            ans = tmp;
        }
    }
    
    cout << ans << endl;

    return 0;
}