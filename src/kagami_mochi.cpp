#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // 整数の入力
    int n;
    cin >> n;

    vector<int> d;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;

        d.push_back(t);
    }

    //昇順
    sort(d.begin(), d.end());

    int cnt = 0;

    for(int i = 0; i < n - 1; i++){
       if(d[i] < d[i + 1]){
           cnt++;
       }
    }
    
    // 出力
    cout << cnt + 1 << endl;
    return 0;
}