#include<iostream>
using namespace std;
int main()
{
    // 整数の入力
    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;
    
    
    for(int i = 1; i <= n; i++){
        
        int tt = i/10000;
        int th = (i % 10000)/1000;
        int hu = (i % 1000)/100;
        int ty = (i % 100)/10;
        int tmp = tt + th + hu + ty+ (i % 10);
        
        if(a <= tmp && tmp <= b){
            sum = sum + i;
        }
    }
    
    // 出力
    cout << sum << endl;
    return 0;
}