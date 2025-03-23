#include<iostream>

using namespace std;

int main(){
  double X;
  cin >> X;

  if(38.0 <= X){
    cout << 1 << endl;
  }else if(37.5 <= X && X < 38.0){
    cout << 2 << endl;
  }else {
    cout << 3 << endl;
  }
}