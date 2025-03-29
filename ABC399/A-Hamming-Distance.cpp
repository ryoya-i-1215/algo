#include<iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    string S;
    cin >> S;

    string T;
    cin >> T;

    int count = 0;
    for(int i = 0; i < N; i++){
        if(S[i] != T[i]){
            count++;
        }
    }

    cout << count << endl;
}