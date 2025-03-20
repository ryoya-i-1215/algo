#include <iostream>
#include <map>

using namespace std;

int main() {
  int N;
  cin >> N;

  map<int,string> S;
  for(int i=0; i < N; i++){
    string s;
    cin >> s;

    S[s.size()] = s;
  }

  string result = "";
  for(auto s : S){
    result += s.second;
  }

  cout << result << endl;
}