#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    int N , Y;
    cin >> N >> Y;

    int a = -1;
    int b = -1;
    int c = -1;
    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= N - i; j++){
            if(Y == 10000 * i + 5000 * j + 1000 * (N - i - j)){
                a = i;
                b = j;
                c = N - i - j;
                break;
            }
        }
    }

    cout << a << " " << b << " " << c << endl;

    return 0;
}