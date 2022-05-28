#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

#define MAX_V 100000


int main(){
    /*  グラフ構築  */
    vector<vector<int>> G(MAX_V);
    int n;  cin >> n;
    for(int i = 0; i < n; i++){
        int v, k;   cin >> v >> k;

        for(int j = 0; j < k; j++){
            int u;  cin >> u;
            G[v].push_back(u);
        }
    }

    /*      最短距離を保持する      */
    vector<int> dist(MAX_V, -1);        //-1で埋める


    dist[1] = 0;            //初期地点の距離は0


    /*      幅優先探索      */
    queue<int> q;
    q.push(1);              //キューに追加
    while(!q.empty()){      //ループで走査

        int v = q.front();
        q.pop();

        for(int i = 0; i < G[v].size(); i++){
            int u = G[v][i];

            /*      -1ならば未探索      */
            if(dist[u] == -1){
                dist[u] = dist[v] + 1;
                q.push(u);
            }
        }
    }

    
    // 出力
    for(int i = 1; i <= n; i++){
        cout << i << " " << dist[i] << endl;
    }
    
    return 0;
}
