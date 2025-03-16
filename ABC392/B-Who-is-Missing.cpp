#include <vector>
#include <iostream>

using namespace std;

int main(){
  int N,M;
  cin >> N >> M;

  vector<int> A(M);
  for(int i = 0; i < M; i++){
    cin >> A[i];
  }

  vector<int> B(N,0);
  for(int i = 0; i < N; i++){
    B[i] = i+1;
  }

// Bの要素からAの値と一致するindexを探し、そのindexを削除
  for(int i = 0; i < M; i++){
    for(int j = 0; j < B.size(); j++){
      if(A[i] == B[j]){
        B.erase(B.begin() + j);
      }
    }
  }

  if(B.size()== 0){
    cout << "0" << endl;
    return 0;
  }


  cout << B.size() << endl;
  // Bの中身を一行で表示
  for(int i = 0; i < B.size(); i++) {
    cout << B[i];
    if(i < B.size() - 1) cout << " "; // Add space between elements
  }
  cout << endl;
}