#include<iostream>

using namespace std;

int main(){
    int S;

    cin >> S;

    if(200 <= S && S < 300){
        cout << "Success" << endl;
        return 0;
    }

    cout << "Failure" << endl;
}