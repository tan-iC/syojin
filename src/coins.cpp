#include<iostream>
using namespace std;
int main()
{
    // 整数の入力
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;
    int x;
    cin >> x;


    
    int cnt = 0;
    
    for(int i = 0; i <= a; i++){
        
        for(int j = 0; j <= b; j++){
            
            for(int k = 0; k <= c; k++){

                int sum = 500 * i + 100 * j + 50 * k;
                if(sum == x){
                    cnt++;
                }
            }
        }
    }
    
    // 出力
    cout << cnt << endl;
    return 0;
}