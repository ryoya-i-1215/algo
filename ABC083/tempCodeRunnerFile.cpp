#include<iostream>

using namespace std;

int main(){
  int N,A,B;
  cin >> N >> A >> B;

  int sum =0;
  for(int i=0;i< N;i++){
    int num = i;
    int sum_digit = 0;

    int sum_digit = i % 10;
    int num =  i/10;

    if(A <= sum_digit && sum_digit <= B){
      sum += i;
    }

  }

  cout << sum << endl;
}