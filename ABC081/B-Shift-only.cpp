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


  bool flag=false;
  int ans = 0;
  while(true){

    for(int i=0; i<A.size(); i++){
      if(A[i] % 2 == 1){
        flag = true;
        break;
      }
      
      A[i] /= 2;
    }

    if(flag){
      break;
    }
    ans++;
  }

  cout << ans << endl;
}