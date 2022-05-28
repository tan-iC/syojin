#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

#define MAX_H 55
#define MAX_W 55

int W, H;
int c[MAX_H][MAX_W];

void dfs(int y, int x){
    c[y][x] = 0;

    for(int i = -1; i <= 1; i++){
        for(int j = -1; j <= 1; j++){
            int ny = y + i;
            int nx = x + j;
            if(ny >= 0 && ny < H && nx >= 0 && nx < W){
                if(c[ny][nx] == 1){
                    dfs(ny, nx);
                }
            }
        }
    }
}

int main(){
    while(1) { 
        cin >> W >> H;
        if(W == 0 && H == 0) break;
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                cin >> c[i][j];
            }
        }

        int ans = 0;
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                if(c[i][j] == 1){
                    dfs(i, j);
                    ans++;
                }
            }
        }

        // 出力
        cout << ans << endl;
    }
    return 0;
}
