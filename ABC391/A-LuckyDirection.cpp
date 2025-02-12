
#include <iostream>
using namespace std;
#include <vector>
#include <map>

int main(){

string D;
cin >> D;

string array[4][2] = {{"E","W"},{"S","N"},{"NW","SE"},{"NE","SW"}};

map<string,string> mapO;
for(int i = 0; i < 4; i++){
    mapO[array[i][0]] = array[i][1];
    mapO[array[i][1]] = array[i][0];
}

cout << mapO[D] << endl;
}