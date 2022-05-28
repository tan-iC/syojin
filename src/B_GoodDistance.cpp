#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    int X[N][D];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < D; j++){
            cin >> X[i][j];
        }
    }

    int cnt = 0;

    for(int i = 0; i < N; i++){

        for(int j = i + 1; j < N; j++){
            double distance = 0;

            for(int k = 0; k < D; k++){
                distance += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]);
            }

            distance = sqrt(distance);
            int ans = (int) distance;

            if(distance == ans){
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}