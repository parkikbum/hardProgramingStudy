#include <iostream>
#include <string>

using namespace std;

int main(){
    int a,b,sol,v;
    int matharr[1001] = {0,};

    cin >> a >> b;
    int cnt = 0;
    int j = 0;
    v = 0;
    while (true)
    {
        v = v + 1;
        for(int k = 0; k < v; k++){
            matharr[j] = v;
            j = j + 1;
            cnt ++;
        if(cnt == 1000){
            break;
        }
        }
        if(cnt == 1000){
            break;
        }
    }
    sol = 0;
    for(int i = a; i <= b; i++){
        sol = matharr[i-1] + sol;
    }
    cout << sol << endl;

} 