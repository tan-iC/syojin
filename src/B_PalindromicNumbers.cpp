#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int ans = 0;
    int n = 10;

    for(int i = A; i <= B; i++){
        int tmp = i;
        int cnt = 0;
        int k[n];
        k[0] = tmp % 10;
        tmp /= 10;
        
        while(tmp > 0){
            cnt++;
            k[cnt] = tmp % 10;
            tmp /= 10;
        }

        int a = 1;

        for(int j = 0; j < (cnt / 2); j++){
            if(k[j] != k[cnt - j]){
                a = 0;
                break;            
            }
        }

        if(a == 1){
            ans++;
        }
    }


    cout << ans << endl;

    return 0;
}