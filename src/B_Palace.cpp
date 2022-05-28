#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int T, A;
    cin >> T >> A;
    
    int H[N];
    double t[N], dif[N];
    double mindif, minnum;
    for(int i = 0; i < N; i++){
        cin >> H[i];
        
        t[i] = T - H[i] * 0.006;

        dif[i] = abs(A - t[i]);

        if(i == 0){
            mindif = dif[i];
            minnum = i;
        }
        else{
            if(mindif > dif[i]){
                mindif = dif[i];
                minnum = i;
            }
        }
    }
    
    cout << minnum + 1 << endl;

    return 0;
}