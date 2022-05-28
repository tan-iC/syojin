#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    int c[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> c[i][j];
        }
    }

    string s;
    int a[3] = {0};
    int b[3] = {0};

    for(int i = 0; i < 3; i++){
        b[i] = c[0][i] - a[0];
    }
    for(int i = 0; i < 3; i++){
        a[i] = c[i][0] - b[0];
    }

    bool t = true;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(c[i][j] != a[i] + b[j]){
                t = false;
                break;
            }
        }
    }
    
    if(t == true){
        s = "Yes";
    }
    else{
        s = "No";
    }
    
    cout << s << endl;

    return 0;
}