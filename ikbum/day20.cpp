#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string board;
    string sol;
    int Xcnt = 0;
    int num = -1;
    int arr;
    int i;
    cin >> board;
    arr = 0;
    while(true){
    for(i = num+1; i < board.length(); i++){
        if(board[i] == 'X'){
            Xcnt ++;
            num = i;
        }
        if(board[i] == '.'){
            num = i; 
            break;
        }
    }
    if (Xcnt % 2 == 1){
        cout << -1 << endl;
        exit(0);
    }
    else{
        for(int j = 0; j < Xcnt / 4; j++){
            sol.append("AAAA");
        }
        for(int k = 0; k < Xcnt % 4; k++){
            sol.append("B");
        }
    }
    if(board[num] == '.'){
        sol.append(".");
    }
    if(num == board.length() - 1){
        break;
    }
    Xcnt = 0;
    }
    cout << sol << endl;
}