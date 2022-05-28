#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

const int MAX = 100010;

int main() {
    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    
    int ans = 0;
    int sum;
    int M;
    sort(num, num+3);
    M = num[2];
    sum = num[0] + num[1] + num[2];
    if((3 * M % 2) == (sum % 2)){
        ans = (3 * M - sum) / 2;
    }
    else{
        ans = (3 * (M + 1) - sum) / 2;
    }

    cout << ans << endl;

    return 0;
}