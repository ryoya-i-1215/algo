#include<iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    int N,D;
    cin >> N >> D;

    vector<int>A(D);
    for(int i = 0; i < N; i++){
        int k; // 体重
        int v; // 体長

        cin >> k >> v;
        
        for(int j = 1; j <= D; j++){
            int value = k * (v + j);
            if(A[j-1] < value){
                A[j-1] = value;
            }
        }
    }

    for(int i = 0; i < D; i++){
        cout << A[i] << endl;
    }
}