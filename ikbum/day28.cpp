#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n,cnt;
    cin >> n;
    int arr[10];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 10; j++){
            cin >> cnt;
            arr[j] = cnt;
        }
        sort(arr, arr+10);
        cout << arr[7] << endl;
    }

}