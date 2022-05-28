#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int ans = 0;

    for(int i = 1; i <= N; i++){
        int sum;
        
        sum = i % 10;
        int tmp = i / 10;

        while(tmp > 0){
            sum += tmp % 10;
            tmp /= 10;
        }
        
        if(A <= sum && sum <= B){
            ans += i;
        }
        
    }

    cout << ans << endl;

    return 0;
}