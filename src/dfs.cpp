#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define MAX_V 100000

vector<vector<int>> Graph(MAX_V);   //グラフ

bool visited[MAX_V];                //1度訪れたかどうかを管理する


int getsum();


int main(){
    // ここのNは与えられる辺の数
    string s;
    cin >> s;

    int cnt = 0;
    


    
    
    // 出力
    if(cnt != 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}
