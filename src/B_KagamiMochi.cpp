#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    int d[N];
    for(int i = 0; i < N; i++){
        cin >> d[i];
    }
 
    sort(d, d + N, greater<int>());
    int ans = 1;
    int tmp = d[0];
 
    for(int i = 1; i < N; i++){
        if(tmp != d[i]){
            ans++;
        }
        tmp = d[i];
    }
    
    cout << ans << endl;
 
    return 0;
}