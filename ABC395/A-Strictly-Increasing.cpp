#include<iostream>
#include<vector>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++){
    cin >> A[i];
  };

  string result = "Yes";
  for (int i = 0; i < N; i++){
      if(i == N-1){
        break;
      }

      if(A[i] < A[i+1]){
        continue;
      }

      result = "No";
  };

  cout << result << endl;
}