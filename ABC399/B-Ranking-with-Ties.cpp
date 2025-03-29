#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool allEqual(std::vector<int> const &v) {
    for (int i = 1; i < v.size(); i++) {
        if (v[0] != v[i]) {
            return false;
        }
    }
 
    return true;
}

int main(){
    int N;
    cin >> N;

    vector<int> P(N);
    for(int i = 0; i < N; i++){
        cin >> P[i];
    }

    vector<int> R(N,0);
    int r = 1;
    while(true){
        int max = *max_element(begin(P), end(P));
        int maxCount = 0;
        for(int j = 0; j < N; j++){
            if(P[j] == max){
                R[j] = r;
                P[j] = 0;
                maxCount++;
            }
        }
        r += maxCount;

        if(allEqual(P)){
            break;
        }
    }

    for(int i = 0; i < N; i++){
        cout << R[i] << endl;
    }
}