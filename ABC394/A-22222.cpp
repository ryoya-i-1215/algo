#include<iostream>
#include<vector>

using namespace std;

int main() {
string S;
cin >> S;

vector<char> chars(S.begin(), S.end());

string result = "";
for(auto c : chars){
  if(c == '2'){
  result += c;
  }
}

cout << result << endl;
}