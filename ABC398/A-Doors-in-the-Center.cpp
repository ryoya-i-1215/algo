#include<iostream>

using namespace std;

int main(){
  int N;
  cin >> N;

  if(N % 2 == 0){
    for(int i = 0; i < (N - 2) / 2; i++){
      cout << "-";
    }
    cout << "==";
    for(int i = 0; i < (N - 2) / 2; i++){
      cout << "-";
    }
    cout << endl;
    return 0;
  }


    for(int j = 0; j < N/2; j++){
      cout << "-" << "";
    }
    cout << "=" << "";
    for(int j = 0; j < N/2; j++){
      cout << "-" << "";
    }
}