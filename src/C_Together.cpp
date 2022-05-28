#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

const int MAX = 100010;

int main() {
    int N;
    cin >> N;

    int a[MAX] = {0};
    int numA[MAX] = {0};
    
    for(int i = 0; i < N; i++){
        cin >> a[i];
        numA[a[i]]++;
        numA[a[i] + 1]++;
        numA[a[i] + 2]++;
    }
    int ans = 1;

    for(int i = 0; i < N; i++){
        ans = max(ans, numA[i]);
    }

    cout << ans << endl;

    return 0;
}