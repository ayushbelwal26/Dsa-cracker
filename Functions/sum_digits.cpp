#include <bits/stdc++.h>
using namespace std;
int sum_digits(int n){
    int sum = 0;
    while (n>0){
        int temp = n; 
        sum = sum + (temp % 10);
        n = n/10 ;
    }
    return sum ;
}

int main(){
    cout << sum_digits(721);
    return 0;
}