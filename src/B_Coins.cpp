#include <iostream>
using namespace std;

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int cnt = 0;
    
    for(int i = 0; i <= A; i++){
        for(int j = 0; j <= B; j++){
            int ans;
            ans = X - 500 * i - 100 * j;

            if(ans < 0){
                break;
            }
            else if(ans == 0){
                cnt++;
            }
            else if((ans / 50) <= C){
                cnt++;
            }
        }
    }
    
    cout << cnt << endl;

    return 0;
}