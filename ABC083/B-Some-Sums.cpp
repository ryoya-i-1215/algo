#include<iostream>

using namespace std;

int main(){
  int N,A,B;
  cin >> N >> A >> B;

  int total =0;
  for(int i=0;i< N;i++){
    int sum = 0;
    int num = i+1;
    while(num > 0){
      sum += num % 10;
      num /= 10;
    }

    if(A <= sum && sum <= B){
      total += i+1;
    }
  }

  cout << total << endl;
}