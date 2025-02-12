#include <iostream>
using namespace std;

int main() {
    unsigned long long X;
    cin >> X;

    unsigned long long factorial = 1;
    int N = 1;

    while (factorial < X) {
        N++;
        factorial *= N;
    }
    
    if (factorial == X) {
        cout << N << endl;
    }
    return 0;
}