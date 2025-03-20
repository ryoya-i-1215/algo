#include<iostream>
#include <map>

using namespace std;

int main(){
  int N,M;
  cin >> N >> M;


  int count= 0;

  // keyが頂点、辺のペア、value がカウントの値
  map<pair<int,int>,int> P;
  for(int i=0; i < M; i++){
    int a,b;
    cin >> a >> b;

    if(a == b){
      count++;
      continue;
    }

    if(a > b){
      swap(a,b);
    }

    P[make_pair(a,b)]++;
  }

  for(auto p : P){
    count += p.second -1;
  }

  cout << count << endl;
}