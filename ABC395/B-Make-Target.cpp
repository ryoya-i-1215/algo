#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<char> > A(N, vector<char>(N, '?'));
    for (int i = 1; i <= N; i++) {
        int j = N + 1 - i;
        if (i > j) break;

        char color = (i % 2 == 1) ? '#' : '.';
        for (int r = i; r <= j; r++) {
            for (int c = i; c <= j; c++) {
                A[r-1][c-1] = color;
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j];
        }
        cout << "\n";
    }
    return 0;
}
