#include<iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> result(N);

  // 値の出現回数をカウント
  map<int,int> A;
  for(int i = 0; i < N; i++){
    int a;
    cin >> a;
    result[i] = a;
    A[a]++;
  }

  // 出現回数が1の値を取得して降順ソート
  vector<int> values;
  for(auto p : A){
    if(p.second == 1){
      values.push_back(p.first);
    }
  }
  sort(values.begin(), values.end(), greater<int>());

  // 出現回数が1の値がない場合は-1を出力して終了
  if(values.size() == 0){
    cout << -1 << endl;
    return 0;
  }
  
  // 出現回数が1の値の中で最も大きい値のインデックスを出力
  auto it = find(result.begin(), result.end(), values[0]);
  cout << distance(result.begin(), it) + 1 << endl;
}