#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a[N];
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    sort(a, a+N);
    int ans = 0;

    for(int i = 0; i < N; i++){
        if(i % 2 == 0){
            ans += a[i];
        }
        else{
            ans -= a[i];
        }
    }

    cout << abs(ans) << endl;

    return 0;
}