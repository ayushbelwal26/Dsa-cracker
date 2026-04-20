#include <bits/stdc++.h>
using namespace std;
int fact(int a){
    if (a <= 0){
        return 0;
    }
    int f = 1;
    for(int i = 1 ; i <= a ; i++){
        f = f*i ;
    }
    return f ;
}
int binomial_coeff(int n , int r){
    int bin = fact(n)/(fact(r)*(fact(n-r))) ;
    return bin ;
}

int main(){
    cout << binomial_coeff(8,2);
    return 0;
}