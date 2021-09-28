#include <iostream>
#include <algorithm>

using namespace std;
int map[101][101];


int main(){
    int n, sol,x,y;
    sol =0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        for(int l = x; l < x+10; l++){
            for(int j = y; j< y+10; j++){
                if (map[l][j] == 0){
                    sol = sol + 1;
                    map[l][j] = 1;
                }
            }
        }
    }
    cout << sol << endl;
}
