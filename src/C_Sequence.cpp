#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

long long solve(long long a[], long long n){
    long long ans = 0;
    long long sum = 0;
    for(long long i = 0; i < n; i++){
        sum += a[i];

        if(i % 2 == 0){
            if(sum <= 0){
                ans += 1 + abs(sum);
                sum = 1;
            }
        }
        else{
            if(sum >= 0){
                ans += 1 + abs(sum);
                sum = -1;
            }
        }
    }

    return ans;
}

int main() {
    long long n;
    cin >> n;

    long long a[n];
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long ans = 0;
    long long ans1 = solve(a, n);     //a[0] >= 0
    
    for(long long i = 0; i < n; i++){
        a[i] *= -1;
    }

    long long ans2 = solve(a, n);     //a[0] < 0

    ans = min({ans1, ans2});
        
    cout << ans << endl;

    return 0;
}