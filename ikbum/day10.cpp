#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, min = 0;
    string question;
    cin >> n;
    cin >> question >> min;
    for(int i =0; i < n-1; i++){
        int temp;
        string str;

        cin >> str >> temp;

        if(min > temp){
            min = temp;
            question = str;
        }
    }

    cout << question;
}