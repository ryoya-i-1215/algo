#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }

  sort(a.begin(), a.end(), greater<int>());

  vector<int> alice;
  vector<int> bob;
  for(int i = 0; i < N; i++){
    if(i % 2 == 0){
      alice.push_back(a[i]);
    }else{
      bob.push_back(a[i]);
    }
  }

  cout << accumulate(alice.begin(), alice.end(), 0) - accumulate(bob.begin(), bob.end(), 0) << endl;
}