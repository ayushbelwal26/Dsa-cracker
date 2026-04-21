#include <bits/stdc++.h>
using namespace std;

int getSum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

long long getProduct(int arr[], int n){
    long long product = 1;
    for (int i = 0; i < n; i++){
        product *= arr[i];
    }
    return product;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << getSum(arr, n) << endl;
    cout << getProduct(arr, n) << endl;

    return 0;
}