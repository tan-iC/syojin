#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    int ans = 0;
    
    if(A + B > 2 * C){
        int tmpX = X;
        int tmpY = Y;

        while((tmpX - 1 >= 0) && (tmpY - 1 >= 0)){
            ans += 2 * C;
            tmpX -= 1;
            tmpY -= 1;
        }

        if(A > 2 * C){
            while(tmpX - 1 >= 0){
                ans += 2 * C;
                tmpX -= 1;
                tmpY -= 1;
            }
        }

        if(B > 2 * C){
            while(tmpY - 1 >= 0){
                ans += 2 * C;
                tmpX -= 1;
                tmpY -= 1;
            }
        }

        if(tmpX > 0){
            ans += A * tmpX;
        }
        if(tmpY > 0){
            ans += B * tmpY;
        }
    }
    else{
        ans = A * X + B * Y;        
    }
    
    cout << ans << endl;

    return 0;
}