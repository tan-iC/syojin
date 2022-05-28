#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;

int main() {
    ll N;
    cin >> N;

    string S;
    cin >> S;

    vector<ll> A;
    ll k = 0;
    vector<vector<ll>> ans;

    for(ll i = 0; i < N + 1; i++){
        cin >> A[i];
    }
    ans[0] = A;

    bool f = true;
    while(f){
        vector<ll> tmp;

        for(ll i = 0; i < N; i++){
            if(S[i] == '<'){
                while(ans[k][i] - 1 < ans[k][i + 1]){
                    ans[k][i]--;
                    tmp[i]++;
                }
            }
            else{
                while(ans[k][i] - 1 > ans[k][i + 1]){
                    ans[k][i]--;
                    tmp[i]++;
                }
            }
        }

        for(ll i = 0; i < N; i++){
            if(S[i] == '<'){
                if(tmp[i] < tmp[i + 1]){}
                else{
                    f = false;
                    break;
                }
            }
            else{
                if(tmp[i] > tmp[i + 1]){}
                else{
                    f = false;
                    break;
                }
            }
        }

        if(f){
            k++;
            ans[k] = tmp;
        }
    }

    cout << k + 1 << endl;
    for(ll i = 0; i < k + 1; i++){
        for(ll j = 0; j < N + 1; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}