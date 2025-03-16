#include <iostream>
#include <array> // 追加
#include <algorithm> // sort関数のために追加

using namespace std;

int main() {
  int A1,A2,A3;
  cin >> A1 >> A2 >> A3;

  array<int, 3> A = {A1, A2, A3};
  // 昇順に並び替える
  sort(A.begin(), A.end());

  int B1 = A[0];
  int B2 = A[1];
  int B3 = A[2];

  if(
    B1 * B2 == B3
  ){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}