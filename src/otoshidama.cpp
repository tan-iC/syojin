#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getsum();


int main()
{
    // 整数の入力
    int n, y;
    cin >> n >> y;

    int cnt = 0;
    int i, j, k;
    int tt = 0;
    int ft = 0;
    int th = 0;


    for(i = n; i >= 0; i--){
        
        for(j = n - i; j >= 0; j--){
            
            k = n - i - j;  
            if(10000 * k + 5000 * j + 1000 * i == y){
                tt = k;
                ft = j;
                th = i;

                if(tt + ft + th == n){
                    cnt++;
                }
                break;
            }
        }        
    }
    
    // 出力
    if(cnt != 0){
        cout << tt << " " << ft << " " << th << endl;
    }
    else{
        cout << -1 << " " << -1 << " " << -1 << endl;
    }
    
    return 0;
}
