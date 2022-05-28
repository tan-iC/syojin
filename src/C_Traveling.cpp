#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

const int MAX = 100010;

int main() {
    int N;
    cin >> N;

    int t[MAX] = {0};
    int x[MAX] = {0};
    int y[MAX] = {0};
    
    for(int i = 0; i < N; i++){
        cin >> t[i] >> x[i] >> y[i];
    }
    
    string ans = "Yes";
    int dt;
    int dx;
    int dy;

    for(int i = 0; i < N; i++){
        if(i == 0){
            dt = t[i];
            dx = x[i];
            dy = y[i];
        }
        else{
            dt = t[i] - t[i - 1];
            dx = abs(x[i] - x[i - 1]);
            dy = abs(y[i] - y[i - 1]);
        }
        int dist = dx + dy;

        if(dt < dist){
            ans = "No";
            break;
        }
        else{
            if((dt % 2) != (dist % 2)){
                ans = "No";
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}