#include<iostream>
#include<vector>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> A(N);
  for(int i=0; i<N; i++){
    cin >> A[i];
  };


  int ans = 0;
  while(true){
    int value;

    for(int i=0; i<A.size(); i++){
      if(A[i] % 2 == 1){
        cout << ans << endl;
        return 0;
      }
      
      A[i] /= 2;
      ans++;
    }
  }

  cout << ans << endl;
}