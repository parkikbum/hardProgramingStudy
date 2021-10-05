#include <iostream>

using namespace std;



int main(){
    int n[5];
    for(int i = 0; i < 5; i ++){
        cin >> n[i];
    }

    while(true){
        for(int i = 0; i < 4; i++){
            int temp;
            if(n[i] > n[i+1]){
                temp = n[i];
                n[i] = n[i+1];
                n[i+1] = temp;
                cout << n[0] << " " << n[1] << " " << n[2] << " " << n[3] << " " << n[4] << endl;

            }
        }

        if(n[0] == 1 && n[1] == 2 && n[2] == 3 && n[3] == 4 && n[4] == 5){
            break;
        }
        
    }

}