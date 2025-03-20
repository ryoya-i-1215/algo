#include <iostream>

using namespace std;

int main(){
  string S;
  cin >> S;

  int n = S.size();
  int i = 0;
  while(i < n - 1){
    if(S[i] == 'W' && S[i+1] == 'A'){
      S[i] = 'A';
      S[i+1] = 'C';
      // 置換後、前の位置に戻って新たな "WA" ができていないか確認する
      if(i > 0) i--;
      else i++;
    } else {
      i++;
    }
  }

cout << S << endl;
}