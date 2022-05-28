#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;

ll tab[3 * MAX][3];

int main() {
    
    ll N;
    cin >> N;

    string S;
    cin >> S;
    string s1;
    string s2;
    for(ll i = 0; i < N; i++){
        s1 += S[i];
        s2 += S[N + i];
    }

    ll Q;
    cin >> Q;

    for(ll i = 0; i < Q; i++){
        for(ll j = 0; j < 3; j++){
            cin >> tab[i][j];
        }
    }

    int t = -1;
    for(ll i = 0; i < Q; i++){
        if(tab[i][0] == 1){

            ll p1 = tab[i][1] - 1;
            ll p2 = tab[i][2] - 1;

            if(t == 1){ 
                if(p1 < N){
                    p1 += N;
                }
                else{
                    p1 -= N;
                }
                if(p2 < N){
                    p2 += N;
                }
                else{
                    p2 -= N;
                }
            }
            char a = S[p1];
            char b = S[p2];
            S[p2] = a;
            S[p1] = b;
        }
        else{
            t *= -1;
        }
    }
    
    if(t == 1){
        string a = S.substr(0, N);
        string b = S.substr(N, N);
        S = b + a;
    }
 
    cout << S << endl;

    return 0;
}