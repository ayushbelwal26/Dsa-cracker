#include <bits/stdc++.h>
using namespace std;
void unique_value(int arr[] , int n){
    for (int i = 0 ; i < n ; i++){
        int count = 0 ;
        for(int j = 0 ; j < n ; j++)
        {
            if (arr[i] == arr[j]){
                count ++ ;
            }
        }
        if (count == 1){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int arr[] = {2 , 3 , 2 , 3 , 5 , 6 , 6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    unique_value(arr , n) ;
    return 0; 
}