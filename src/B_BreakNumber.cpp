#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 1;
    int cnt = 0;

    while(true){

        a *= 2;

        if(a > n){
            break;
        }

        cnt++;

    }

    cout << pow(2, cnt) << endl;

    return 0;
}