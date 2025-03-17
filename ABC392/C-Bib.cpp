#include <iostream>
#include <map>

using namespace std;

int main(){
  int N;
  cin >> N;

  map<int,int> P;
  map<int,int> Q;
  map<int,int> R;

  // 人i -> 人iを見つめる人
  for(int i = 1; i <= N; i++){
    cin >> P[i];
  }
  // 人iがつけているゼッケン番号
  for (int i = 1; i <= N; i++) {
      cin >> Q[i];
  }
  // ゼッケン番号からひとを探す
  for(int i = 1 ; i <= N; i++){
    R[Q[i]] = i;
  }

  for(int i = 1 ; i <= N; i++){
    cout << Q[P[R[i]]] << " ";
  }
}