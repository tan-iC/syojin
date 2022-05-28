#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

string d[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
    string S;
    cin >> S;

    string ans;

    reverse(S.begin(), S.end());
    for(int i = 0; i < 4; i++){
        reverse(d[i].begin(), d[i].end());
    }

    bool cut = true;
    for(int i = 0; i < S.size();){
        bool cut2 = false;
        for(int j = 0; j < 4; j++){
            string tmp = d[j];
            if(S.substr(i, tmp.size()) == tmp){
                cut2 = true;
                i += tmp.size();
            }
        }
        if(cut2 == false){
            cut = false;
            break;
        }
    }

    if(cut == true){
        ans = "YES";
    }
    else{
        ans = "NO";
    }
    
    cout << ans << endl;

    return 0;
}