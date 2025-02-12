#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    // 長さが2の場合、どんな2項でも等比数列とみなせる
    if(N == 2){
        cout << "Yes" << endl;
        return 0;
    }
    
    for(int i = 0; i < N - 2; i++){
        if(static_cast<long long>(A[i+1]) * A[i+1] != static_cast<long long>(A[i]) * A[i+2]){
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    return 0;
}
