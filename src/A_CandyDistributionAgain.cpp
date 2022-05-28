#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    int N, x;
    cin >> N >> x;

    int a[N];
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    sort(a, a+N);
    int ans = 0;

    for(int i = 0; i < N; i++){
        x -= a[i];

        if(x < 0){
            ans = i;
            break;
        }else if(x == 0){
            ans = i + 1;
            break;
        }
        else{
            ans = i;
        }
    }
    
    cout << ans << endl;

    return 0;
}