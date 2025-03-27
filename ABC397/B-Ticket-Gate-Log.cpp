#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    
    int count = 0;       
    char expect = 'i';  
    
    for (int i = 0; i < n; i++){
        if(s[i] == expect){
            count++;
            expect = (expect == 'i' ? 'o' : 'i');
        }
    }

    int ans = (n - count) + (count % 2);

    cout << ans << endl;
    return 0;
}
