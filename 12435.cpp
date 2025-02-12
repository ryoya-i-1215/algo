#include <iostream>
#include <array>
#include <algorithm>  // swap を利用するために必要
using namespace std;

int main() {
    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    
    array<int, 5> aArray = {a1, a2, a3, a4, a5};
    array<int, 5> ans = {1, 2, 3, 4, 5};
    
    // 既に昇順の場合は「ちょうど1回の交換」で昇順にする操作とはならないので "No"
    if (aArray == ans) {
        cout << "No" << endl;
        return 0;
    }
    
    // 各隣接する2要素の交換を試す
    for (int i = 0; i < 4; i++) {
        array<int, 5> temp = aArray; // 元の配列をコピー
        swap(temp[i], temp[i+1]);    // i 番目と i+1 番目の要素を交換
        
        // 交換後の配列が昇順になっているかチェック
        if (temp == ans) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    return 0;
}