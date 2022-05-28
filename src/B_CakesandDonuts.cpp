#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool cnt = false;
    string s;

    for(int i = 0; i <= (N / 7); i++){
        for(int j = 0; j <= (N / 4); j++){
            int ans;
            ans = 7 * i + 4 * j;
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