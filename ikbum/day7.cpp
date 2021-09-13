#include <iostream>
#include <string>

using namespace std;

int main (){
    char str[5][15] = {"",};
    int cnt = 0;

    for(int i = 0; i < 5; i ++){
        cin >> str[i];
    } 
    for (int l = 0; l < 15; l++){
        for (int k = 0; k <5; k++){
            if(int(str[k][l]) != 0){
            cout << str[k][l];
            }
        }
    }
}