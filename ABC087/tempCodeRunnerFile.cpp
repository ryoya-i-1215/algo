#include<iostream>

using namespace std;

int main(){
  int A,B,C,X;
  cin >> A; // 500 yen
  cin >> B; // 100 yen
  cin >> C; // 50 yen
  cin >> X; // Total amount

  int ans = 0;
    for(int a=0; a <= A;i++){
      if(500*a == X){
        ans++;
      }
      for(int b=0; b <= B;i++){
        if(500*a + 100*b == X){
          ans++;
        }
        for(int c=0; c <= C;i++){
          if(500*a + 100*b + 50*c == X){
            ans++;
          }
        }
      }
    }

  cout << ans << endl;
}