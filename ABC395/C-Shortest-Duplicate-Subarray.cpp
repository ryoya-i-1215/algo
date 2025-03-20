#include <iostream>
#include <map>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int ans = N + 1;
  map<int, int> latestIndex;

  for(int i = 0; i < N; i++){
    int current = A[i];

    if (latestIndex.find(current) != latestIndex.end()){
      int length = i - latestIndex[current] + 1;
      ans = min(ans, length);
    }

    latestIndex[current] = i;
  }

  if(ans == N + 1){
    cout << -1 << "\n";
  } else {
    cout << ans << "\n";
  }
}