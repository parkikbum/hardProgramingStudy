#include<iostream>

using namespace std;

int main(){
    int num,n1,n2;
    cin >> num;
    long long sol = 1;
    for (int i = 0; i < num; i++){
        cin >> n1 >> n2;
        sol = 1;

        if (n1 > (n2/2)){
            n1 = (n2 - n1);
        }

        for(int l = 0; l < n1; l++){
            sol = sol * (n2 - l);
        }
        
        for (int k = 0; k < n1; k++){
            sol = sol / (k+1);
        }

        cout << sol << endl;

    }


}