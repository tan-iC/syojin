#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    // ε₯ε
    string s;   cin >> s;
    string t = "";
    string ans = "";
    int f = 0;

    for (int i = s.length()-1; i >= 0; i--){
        if (s[i] == 'B'){
            f++;
        }
        else{
            if (f == 0){
                t += s[i];
            }
            else{
                f--;
            }
        }
    }
    for (int i = t.length()-1; i >= 0; i--){
        ans += t[i];
    }

    // εΊε
    cout << ans << endl;
    
    return 0;
}
