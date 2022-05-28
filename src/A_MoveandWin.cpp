#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

const int MAX = 100010;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    
    int dif = B - A - 1;

    string ans;
    
    if(dif % 2 == 1){
        ans = "Alice";
    }
    else{
        ans = "Borys";
    }
    
    cout << ans << endl;

    return 0;
}