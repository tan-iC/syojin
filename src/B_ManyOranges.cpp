#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;

int main() {
    int A, B, W;
    cin >> A >> B >> W;
    
    double ans = W * 1000;
    int cntMax = 0;
    int cntMin = 1e9;
    int a = ans / A;
    int b = ans / B;
    
    //個数iを先に決定して平均の重さが範囲内にあるか調べる
    for(int i = b - 1; i <= a + 1; i++){
        double t = (double) (ans / i);
        if(A <= t && t <= B){
            cntMin = min(cntMin, i);
            cntMax = max(cntMax, i);
        }
    }

    if(cntMax == 0){
        cout << "UNSATISFIABLE" << endl;
    }
    else{
        cout << cntMin << " " << cntMax << endl;
    }

    return 0;
}