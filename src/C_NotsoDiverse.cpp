#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

const int MAX_N = 200000 + 10;
int num[MAX_N];

int main() {
    int N , K;
    cin >> N >> K;

    int A;
    for(int i = 1; i <= N; i++){
        cin >> A;
        num[A]++;
    }
    
    sort(num, num+MAX_N, greater<int>());

    int ans = 0;
    for(int i = K; i < MAX_N; i++){
        ans += num[i];
    }
        
    cout << ans << endl;

    return 0;
}