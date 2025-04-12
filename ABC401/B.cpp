#include<iostream>
#include<vector>

using namespace std;

int main(){
 int N;
 cin >> N;

 vector<string> S(N);
 for(int i = 0; i < N; i++){
    cin >> S[i];
 }

 bool loginFlag = false;
 int count = 0;
 for(int i = 0; i < N; i++){
    if(S[i] == "login"){
        loginFlag = true;
    }

    if(S[i] == "logout"){
        loginFlag = false;
    }

    if(!loginFlag && S[i] == "private"){
        count++;
    }
 }

 cout << count << endl;
 
}