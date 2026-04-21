#include <bits/stdc++.h>
using namespace std;
void swaping_max_min(int arr[], int n){
    int max = arr[0];
    int min = arr[0];
    int index1 = 0, index2 = 0 ;
    for (int i = 0 ; i < n ; i++){
        if(arr[i] > max){
            max = arr[i];
            index1 = i ;
        }

        if (arr[i] < min){
            min = arr[i];
            index2 = i ;
        }
        
    }
    swap(arr[index1],arr[index2]);
}

int main(){
    int arr[] = {5,1,3,28,9,77};
    int n = sizeof(arr)/sizeof(arr[0]);
    swaping_max_min(arr , n);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}