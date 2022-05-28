#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int min;

    for(int a = 1; a < N; a++){
        int A = a;
        int B = N - a;
        int sum;
        int sumA = A % 10;
        int sumB = B % 10;
        A /= 10;
        B /= 10;
        while(A > 0){
            sumA += A % 10;
            A /= 10;
        }
        while(B > 0){
            sumB += B % 10;
            B /= 10;
        }

        sum = sumA + sumB;

        if(a == 1){
            min = sum;
        }
        else{
            if(min > sum){
                min = sum;
            }
        }
    }

    cout << min << endl;

    return 0;
}