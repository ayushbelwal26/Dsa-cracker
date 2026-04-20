#include <bits/stdc++.h>
using namespace std;
int check_prime(int n){
    if (n <= 1){
        return -1 ;
    }
    for (int i = 2 ; i*i <= n ; i++){
        if (n%i == 0){
            return -1;
        }
    }
    return 0;
}

int main(){
    if(check_prime(7) == -1){
        cout << "Not prime";
    }
    else{
        cout << "Prime";
    }
}
