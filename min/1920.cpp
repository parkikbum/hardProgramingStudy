#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int arr[100001];

void BinarySearch(int n, int find) {

    int first = 0;
    int last = n - 1;
    int mid;

    while (last - first >= 0) {
        mid = (first + last) / 2;

        if (arr[mid] == find) {   
            printf("1\n");
            return;
        }
        else if (arr[mid] > find) { 
            last = mid - 1;
        }
        else {  
            first = mid + 1;
        }
    }
    printf("0\n");
    return;
}

int main(void) {

    int n, m;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + n);   

    scanf("%d", &m);

    int tmp;

    for (int i = 0; i < m; i++) {
        scanf("%d", &tmp);
        BinarySearch(n, tmp);
    }
    return 0;
}
