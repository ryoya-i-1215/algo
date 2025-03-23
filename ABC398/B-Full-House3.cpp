#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  map<int,int> A;
  for(int i = 0; i < 7; i++){
    int a;
    cin >> a;
    A[a]++;
  }

  vector<int> values;
  for(auto p : A){
    values.push_back(p.second);
  }
    
  sort(values.begin(), values.end(), greater<int>());

  if(values[0] >= 3 && values[1] >= 2){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}