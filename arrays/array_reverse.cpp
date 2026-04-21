// #include <bits/stdc++.h>
// using namespace std;
// void reverse_Array(int arr[], int n){
//     int temp[n];
//     for (int i = n-1 ; i >= 0 ; i--){
//         temp[n-i-1] = arr[i];
//     }

//     for (int i = 0 ; i < n ; i++){
//         arr[i] = temp[i];
//     }
// }

// int main(){
//     int n = 7;
//     int arr[] = {4,2,7,8,1,2,5};
//     reverse_Array(arr , n) ;
//     for (int i = 0 ; i < n ; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// 2 - POINTER APPROACH:
#include <bits/stdc++.h>
using namespace std;
void reverse_Array(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++ ;
        end-- ;
    }
}

int main(){
    int size = 7;
    int arr[] = {4,2,7,8,1,2,5};
    reverse_Array(arr , size);
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
}