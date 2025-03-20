#include<iostream>
#include<vector>

using namespace std;

int main(){
  int Q;
  cin >> Q;


  vector<int> A(Q);
  vector<int> ans;
  for(int i = 0; i < Q; i++){
    int N;
    cin >> N;

    if(N == 1){
      int M;
      cin >> M;
      A.push_back(M);
    }

    if(N == 2){
      // 配列Aの最後から取り出す
      int last = A.back();
      A.pop_back();
      ans.push_back(last);
    }
  }
  
  for(int j = 0; j < ans.size(); j++){
    cout << ans[j] << endl;
  }
}