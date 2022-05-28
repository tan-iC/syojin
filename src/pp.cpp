#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

#define MAX_H 20
#define MAX_W 20

/*      差分        */
const int dx[4] = {0, -1, 0, 1};
const int dy[4] = {-1, 0, 1, 0};


int cnt = 0;


int main(){
    /*  グラフ構築  */

    //マップ最大値
    int H, W;   cin >> H >> W;

    //スタート
    int sy, sx;

    /*  文字列一列ずつを格納する    */
    vector<string> c;

    //マップの情報の入力
    for(int i = 0; i < H; i++){
        string s;   cin >> s;
        c.push_back(s);
    }

    
    
    for(int m = 0; m < H; m++){
        for(int n = 0; n < W; n++){
            if(c[m][n] == '#'){
                break;
            }
            
            //マップ上の座標へのスタート地点からの最短距離を保持する
            //-1で埋める
            vector<vector<int>> dist(MAX_H, vector<int>(MAX_W, -1));

            //スタート地点
            sy = m;
            sx = n;

            dist[sy][sx] = 0;           //スタート地点の初期化

            //座標をペアにしてキューに突っ込む
            queue<pair<int, int>> q;
            q.push({sy, sx});

            /*      幅優先探索      */
            while(!q.empty()){
        
                //キューの最前の要素を取り出す
                pair<int, int> p = q.front();
                q.pop();

                //取り出した値を受け取る
                int y = p.first, x = p.second;


                /*      遷移        */
                for(int i = 0; i < 4; i++){
                    int ny = y + dy[i];
                    int nx = x + dx[i];

                    //移動可能か、未探索かどうかをチェックし、遷移する
                    if(ny >= 0 && ny < H && nx >= 0 && nx < W
                        && dist[ny][nx] == -1 && c[ny][nx] == '.'){
                            dist[ny][nx] = dist[y][x] + 1;

                            //移動後の座標をキューに追加する
                            q.push({ny, nx});
                    }

                    //大きい方を記録
                    if(dist[ny][nx] > cnt){
                        cnt = dist[ny][nx];
                    }
                }
                
            }
        }
    }


    
    // 出力
    cout << cnt << endl;
    
    return 0;
}
