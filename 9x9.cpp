# include <iostream>
#include<string>
#include <vector>

using namespace std;

int main(){
  string s;
  cin >> s;

  int i1 = s[0] - 48;
  int i2= s[2] - 48;
  cout << i1*i2 << endl;
}