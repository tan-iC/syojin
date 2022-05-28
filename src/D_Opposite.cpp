#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
const int MAX = 100010;
ll A[110];

int main() {
    ll N;
    double x, y, X, Y;
    cin >> N >> x >> y >> X >> Y;

    double ansX, ansY, mX, mY;
    mX = (double)((double)(x + X) / 2.0);
    mY = (double)((double)(y + Y) / 2.0);

    double PI = (double)acos(-1);

    double rad = (PI / 180.0) * (360.0 / (double)N);

    ansX = cos(rad) * (double)(x - mX) - sin(rad) * (double)(y - mY) + (double)mX;
    ansY = sin(rad) * (double)(x - mX) + cos(rad) * (double)(y - mY) + (double)mY;

    cout << ansX << " " << ansY << endl;

    return 0;
}