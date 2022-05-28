#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;
ll A[110];
vector <ll> p[MAX];

void dfs(int a, int b){
    if(){
        
    }
}

int main() {
    ll N;
    cin >> N;
    vector<ll> C(N);
    for(ll i = 0; i < N; i++){
        cin >> C[i];
    }

    ll a, b;
    for(ll i = 0; i < N; i++){
        cin >> a >> b;
        p[a].push_back(b);
        p[b].push_back(a);
    }
    
    
    ll ans = 0;

    cout << ans << endl;

    return 0;
}