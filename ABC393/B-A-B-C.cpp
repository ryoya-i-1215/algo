#include <iostream>

using namespace std;


int main() {
  string S;
  cin >> S; //ex. "AABCC"

  // 文字列Sを一文字ずつ配列に格納する ex. ['A', 'A', 'B', 'C', 'C']
  char c[S.size()];
  for(int i = 0; i < S.size(); i++){
    c[i] = S[i];
  }

  int count = 0;
  // Si = A
  for(int i = 0; i < S.size(); i++){
    if(c[i] != 'A'){
      continue;
    }
    
    // Sj = B
    for(int j = i+1; j < S.size(); j++){
      if(c[j] !=  'B'){
        continue;
      }
      
      // Sk = C
      for(int k = j+1; k < S.size(); k++){
        if(c[k] != 'C'){
          continue;
        }
        
        // Sj - Si == Sk - Sj
        if((j+1)-(i+1)==(k+1)-(j+1)){
          count++;
        }
      }
    }
  }

  cout << count << endl;
}