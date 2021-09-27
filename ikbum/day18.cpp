#include <iostream>
#include <algorithm>


using namespace std;

int arrN[100001];
int arrM[100001];

void binarySearch(int n, int m){
    int low = 0;
    int high = n - 1;
    int mid;

    while(low <= high){
        mid = (low + high) / 2;

        if (arrN[mid] == m){
            cout << 1 << "\n";
            return;
        }
        else if (arrN[mid] > m){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << 0 << "\n";
    return;
}


int main(){
    int n,cnt;
    cnt = 0;
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arrN[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> arrM[i];
    }

    sort(arrN, arrN + n);
    
    for(int i = 0; i < m; i++){
        binarySearch(n, arrM[i]);
    }

}