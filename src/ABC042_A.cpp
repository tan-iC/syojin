#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

bool is5(int a){
    if (a == 5){
        return true;
    }
    else{
        return false;
    }
}

bool is7(int a) {
    if (a == 7){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    // 入力
    int A, B, C;   cin >> A >> B >> C;

    int f5 = 0;
    int f7 = 0;
    string ans = "";
    int x[] = {A, B, C};

    for (int i = 0; i < sizeof(x); i++){
        if (is5(x[i])){
            f5++;
        }
        if(is7(x[i])){
            f7++;
        }
    }

    if ((f5 == 2) && (f7 == 1)){
        ans = "YES";
    }
    else{
        ans = "NO";
    }
    
    // 出力
    cout << ans << endl;
    
    return 0;
}
