#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int L[N];
    for(int i = 0; i < N; i++){
        cin >> L[i];
    }

    int cnt = 0;

    for(int i = 0; i < N; i++){

        for(int j = i + 1; j < N; j++){
            
            for(int k = j + 1; k < N; k++){

                if((L[i] != L[j]) && (L[j] != L[k]) && (L[k] != L[i])){
                    int maxL;
                    maxL = max({L[i], L[j], L[k]});
                    
                    int p;
                    p = L[i] + L[j] + L[k] - maxL;

                    if(p > maxL){
                        cnt++;
                    }
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}