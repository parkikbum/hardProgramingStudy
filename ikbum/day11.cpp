#include <iostream>

using namespace std;

int main(){
    int n, caseN, r;
    cin >> n;
    if (n >14){
        caseN = n%14;
        r = n/14;
    }
    else{
        caseN = n;
    }

    switch (caseN){
        case 1:
        case 13:
        cout << "baby";
        break;
        
        case 2:
        case 14:
        case 0:
        cout << "sukhwan";
        break;

        case 3:
        case 7:
        case 11:
        if (r >= 3){
            cout << "tu+ru*" << r+2; 
        }
        else{
        cout << "turu";
        for(int i = 0; i <= r; i ++){
            cout << "ru";
        }
        }
        break;

        case 4: 
        case 8:
        case 12:
        if (r >= 4){
            cout << "tu+ru*" << r+1; 
        }
        else{
        cout << "tu";
        for(int i = 0; i <= r; i ++){
            cout << "ru";
        }
        }
        break;

        case 5:
        cout << "very";
        break;

        case 6:
        cout << "cute";
        break;

        case 9:
        cout << "in";
        break;

        case 10:
        cout << "bed";
        break;

        default:
        break;
            }
}