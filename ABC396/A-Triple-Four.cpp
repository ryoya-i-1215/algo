#include<iostream>
#include<vector>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> A(N);
  for(int i =0; i < N; i++){
    cin >> A[i];
  }

  for(int i = 0; i < N; i++){
    if((A[i] == A[i+1]) && (A[i+1]== A[i+2])){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}