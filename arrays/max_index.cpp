#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int maxi = arr[0];
    int index;
    for (int i = 0 ; i < n ;i++){
        // if (arr[i]>maxi){
        //     maxi = arr[i];
        // }

        maxi = max(arr[i],maxi);
        index = i ;
    }
    cout << index;
}