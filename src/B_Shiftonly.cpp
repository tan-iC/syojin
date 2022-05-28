#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int cnt = 0;
    

    while (true){
        bool f = false;

        for(int i = 0; i < n; i++){
            if(a[i] % 2 != 0){
                f = true;
                break;
            }
            else{
                a[i] /= 2;
            }
        }

        if(f == true){
            break;
        }
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}