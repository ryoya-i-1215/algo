#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    long long count = 0;
    for (int i = 0; i < N - 1; ++i) {
        // 2分探索で、A[i] * 2以上の最初の要素を探す
        auto it = lower_bound(A.begin() + i + 1, A.end(), A[i] * 2);
        // それ以降の要素の数をカウント
        count += A.end() - it;
    }

    cout << count << endl;
    return 0;
}
