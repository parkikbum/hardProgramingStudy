#include <iostream>
#include <string>

using namespace std;

int main(){
    int num = 0;
    string filename;
    string temp;
    string result;
    
    cin >> num;
    cin >> temp;
    result = temp;

    for (int i = 1; i <= num; i++){
        getline(cin, filename);

        for(int k = 0; k < filename.length(); k++){
            if(temp[k] != filename[k]){
                result[k] = '?';
            }
        }

    }
    cout << result;
}