#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

string d[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
    int N;
    cin >> N;

    int A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int ans = 1;
    int p = 0;
    int tmp;

    for(int i = 0; i < N; i++){
        if(i == 0){
            tmp = A[i];
        }
        else{
            if(p == 1){
                if(tmp > A[i]){
                    ans++;
                    p = 0;
                }
            }
            else if(p == -1){
                if(tmp < A[i]){
                    ans++;
                    p = 0;
                }
            }
            else{
                if(tmp < A[i]){
                    p = 1;
                }
                else if(tmp > A[i]){
                    p = -1;
                }
            }
            tmp = A[i];
        }
    }
    
    cout << ans << endl;

    return 0;
}