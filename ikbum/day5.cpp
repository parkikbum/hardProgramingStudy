#include <iostream>
#include <string>

using namespace std;

int main(){
    int num1, num2 = 0;
    int price, max = 0;
    string name, maxname;
    cin >> num1;
    for(int i = 0; i< num1; i ++){
        cin >> num2;
        for(int j = 0; j < num2; j++){
            cin >> price >> name;
            if(max < price){
                max = price;
                maxname = name;
            }
        }
        cout << maxname << "\n";
        max = 0;
    }
}