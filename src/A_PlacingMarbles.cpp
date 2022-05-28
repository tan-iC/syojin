#include <iostream>
using namespace std;

int main() {
	
	int a;
	cin >> a;

	int s = 0;

    for(int i = 0; a > 0; i++){
        if(a % 10 != 0){
            s++;
        }
        a = a / 10;
    }

	cout << s << endl;

	return 0;
}