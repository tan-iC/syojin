#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
// #include<math>

using namespace std;

int dist(int a, int b){
    int t = 0;
    if (a - b > b - a){
        t = a-b;
    }
    else{
        t = b-a;
    }
    int ans = t*t;
    return ans;
}
int mean(int *a, int a_d){
    int sum_a = 0;
    int ans = 0;

    for (int i = 0; i < a_d; i++){
        sum_a += a[i];
    }
    double ave = double(sum_a) / double(a_d);
    ans = int(sum_a / a_d);
    if (ave - double(ans) > 0.5){
        ans += 1;
    }
    return ans;
}

int main(){
    // 入力
    int N;   cin >> N;
    int a[N];
    int ans = -1;

    for (int i = 0; i < N; i++){
        int t;
        cin >> t;
        a[i] = t;
    }

    sort(a, a+N);
    int first = a[0];
    int last = a[N-1];

    for (int i = first; i <= last; i++){
        int t = 0;
        for (int j = 0; j < N; j++){
            t += dist(a[j], i);
        }
        if (ans == -1){
            ans = t;
        }
        else{
            if (ans > t){
                ans = t;
            }
        }
    }

    // 出力
    cout << ans << endl;
    
    return 0;
}
