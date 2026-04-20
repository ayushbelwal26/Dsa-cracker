#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[] , int sz){
    int target = 8;
    for (int i = 0 ; i < sz ; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;
    int x = linear_search(arr,sz);
    if (x == -1){
        cout << "Element not found";
    }
    else{
        cout << "Found at: "<< x;
    }
    return 0;

}