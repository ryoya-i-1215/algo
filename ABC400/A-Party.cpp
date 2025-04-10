#include<iostream>

using namespace std;

int main(){
  int A;

  cin >> A;
  if(400 % A == 0){
    cout << 400 / A << endl;
    return 0;
  }

  cout << -1 << endl;
}