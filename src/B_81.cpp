#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool cnt = false;
    string s;

    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            int ans;
            ans = i * j;
            if(ans == N){
                cnt = true;
                break;
            }
        }
    }

    if(cnt == true){
        s = "Yes";
    }
    else{
        s = "No";
    }
    
    cout << s << endl;

    return 0;
}