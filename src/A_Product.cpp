#include <iostream>
using namespace std;

int main() {
	
	int a,b;
	cin >> a >> b;

	string s;
	
    if((a % 2 != 0) && (b % 2 != 0)){
        s = "Odd";
    }
    else{
        s = "Even";
    }

	cout << s << endl;

	return 0;
}