#include "bits/stdc++.h"
 
using namespace std;

template <typename Iterator>
inline bool next_combination(const Iterator first, Iterator k, const Iterator last)
{
   /* Credits: Thomas Draper */
   if ((first == last) || (first == k) || (last == k))
      return false;
   Iterator itr1 = first;
   Iterator itr2 = last;
   ++itr1;
   if (last == itr1)
      return false;
   itr1 = last;
   --itr1;
   itr1 = k;
   --itr2;
   while (first != itr1)
   {
      if (*--itr1 < *itr2)
      {
         Iterator j = k;
         while (!(*itr1 < *j)) ++j;
         iter_swap(itr1,j);
         ++itr1;
         ++j;
         itr2 = k;
         rotate(itr1,j,last);
         while (last != j)
         {
            ++j;
            ++itr2;
         }
         rotate(k,itr2,last);
         return true;
      }
   }
   rotate(first,k,last);
   return false;
}

inline double get_time_sec(void){
    return static_cast<double>(chrono::duration_cast<chrono::nanoseconds>(chrono::steady_clock::now().time_since_epoch()).count())/1000000000;
}

string sraw, sright;
vector<string> vsleft;

bool isnum(char c) {
    return c >= '0' && c <= '9';
}

int main(void) {
    cin >> sraw;
    int idx = 0, cnt = 0; // cnt:使った文字の種類の数
    map<char, int> mchar;
    string stmp = "";

    // 時間計測開始
    double start, end;
    start = get_time_sec();

    // 左辺を文字列のvectorに整形する
    while(idx < sraw.size()) {
        char c = sraw[idx];
        if(c == '=') {
            // =なら左辺終了
            vsleft.push_back(stmp);
            break;
        } else if(c == '+') {
            // +なら区切って左辺の文字列ベクトルに追加
            vsleft.push_back(stmp);
            stmp = "";
        } else {
            // 新しい文字かどうか確認、数字なら無視する
            if(!mchar.count(c) && !isnum(c)) {
                mchar[c] = -1;
                cnt++;
            }
            stmp.push_back(c);
        }
        idx++;
    }
    if(idx == sraw.size()) return 0;

    // 右辺も同様
    sright = sraw.substr(idx+1, sraw.size()-idx-1);
    idx++;
    while(idx < sraw.size()) {
        char c = sraw[idx];
        if(!mchar.count(c) && !isnum(c)) {
            mchar[c] = true;
            cnt++;
        }
        idx++;
    }
    if(cnt > 10) return 0;
    
    // 0〜9の数列を生成
    vector<int> viota(10);
    iota(viota.begin(), viota.end(), 0);
    
    // 1つ目のdo:0〜9の中から文字の種類の数だけ組み合わせを取り出す
    // 2つ目のdo:取り出した組み合わせから順列を生成
    do {
        do {
            // mapで生成した順列と文字を対応させる
            int jdx = 0;
            for(auto p : mchar) {
                mchar[p.first] = viota[jdx];
                jdx++;
            }

            // mapを元に各文字列を数に変換
            vector<string> vslefttmp(vsleft);
            string srighttmp(sright);
            for(int i = 0; i < vslefttmp.size(); i++) {
                for(int j = 0; j < vslefttmp[i].size(); j++) {
                    if(!isnum(vslefttmp[i][j])) vslefttmp[i][j] = '0' + mchar[vslefttmp[i][j]];
                }
            }
            for(int i = 0; i < srighttmp.size(); i++) {
                if(!isnum(srighttmp[i])) srighttmp[i] = '0' + mchar[srighttmp[i]];
            }
            
            // stoiでintに変換して計算
            // もし各文字列の頭が0ならダメなのでcontinue
            int ans = 0;
            bool isheadzero = false;
            for(auto s : vslefttmp) {
                if(s[0] == '0') {
                    isheadzero = true;
                    break;
                }
                ans += stoi(s);
            }
            if(isheadzero) continue;
            if(srighttmp[0] == '0') continue;
            ans -= stoi(srighttmp);

            // 計算結果が正しければ整形して表示
            if(ans == 0) {
                for(int i = 0; i < vslefttmp.size() - 1; i++) {
                    cout << vslefttmp[i] << " + ";
                }
                cout << vslefttmp[vslefttmp.size() - 1] << " = " << srighttmp << "  //  ";
                for(auto p : mchar) {
                    cout << p.first << ": " << p.second << ", ";
                }
                cout << endl;
            }

        } while(next_permutation(viota.begin(), viota.begin() + cnt));
    } while(next_combination(viota.begin(), viota.begin() + cnt, viota.end()));

    // 時間計測終了
    end = get_time_sec();
    cout << end - start << " sec." << endl;
}