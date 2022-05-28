#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int counter = 700;
    
    if (s[0] == 'o') counter += 100;
    if (s[1] == 'o') counter += 100;
    if (s[2] == 'o') counter += 100;

    cout << counter << endl;

    return 0;
}