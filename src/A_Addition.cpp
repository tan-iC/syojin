#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

const int MAX = 100010;

int main() {
    int N;
    cin >> N;
    int odd = 0;
    int even = 0;
    long long int A[MAX];
    for(int i = 0; i < N; i++){
        cin >> A[i];

        if(A[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    
    string ans;
    if(odd % 2 == 0){
        ans = "YES";
    }
    else{
        ans = "NO";
    }    
    
    cout << ans << endl;

    return 0;
}