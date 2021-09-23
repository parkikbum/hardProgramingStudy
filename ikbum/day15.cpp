#include <iostream>
#include <utility>

using namespace std;

int main(){
    int n;
    int rank = 1;
    pair<int, int> fatHeight[50];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> fatHeight[i].first >> fatHeight[i].second;
    }
    for(int j = 0; j < n; j++){
        for(int k = 0; k < n; k++){
            if(fatHeight[j].first < fatHeight[k].first && fatHeight[j].second < fatHeight[k].second){
                rank += 1;
            }
        }
        cout << rank << endl;
        rank = 1;
    }

}