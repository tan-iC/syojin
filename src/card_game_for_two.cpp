#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // 整数の入力
    int n;
    cin >> n;

    vector<int> a;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;

        a.push_back(t);
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int dif = 0;
    
    int l = 1;

    for(int i = 0; i < n; i++){
       dif = dif + a[i] * l;
       l = l * -1;
    }
    
    // 出力
    cout << dif << endl;
    return 0;
}