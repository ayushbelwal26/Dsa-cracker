#include <bits/stdc++.h>
using namespace std;
void intersection(int arr1[], int arr2[] , int n1 , int n2){
    for (int i = 0 ; i < n1 ; i++){
        int flag = 0 ;
        for(int k = 0 ; k < i ; k++){
            if(arr1[i] == arr1[k]){
                flag = 1 ;
            }
        }
        if (flag == 1){
            continue ;
        }
        for(int j = 0 ; j < n2 ; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " "; 
                break;
            }
        } 
    }
}

int main(){
    int arr1[] = {1,2,3,4};
    int arr2[] = {3,4,5,6} ;
    int n1 = sizeof(arr1)/sizeof(arr1[0]) ;
    int n2 = sizeof(arr2)/sizeof(arr2[0]) ;
    intersection(arr1 , arr2 , n1 , n2);

}
