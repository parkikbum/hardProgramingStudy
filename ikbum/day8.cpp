#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        switch (str[i])
        {
        case 'C':
        break;
        case 'A':
        break;
        case 'M':
        break;
        case 'B':
        break;
        case 'R':
        break;
        case 'I':
        break;
        case 'D':
        break;
        case 'G':
        break;
        case 'E':
        break;
        default:
        cout << str[i];
            break;
        }
    }
    
}