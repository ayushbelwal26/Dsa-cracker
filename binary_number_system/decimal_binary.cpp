#include <bits/stdc++.h>
using namespace std;
int dec_bin(int decNum){
    int pow = 1 , ans = 0 ;
    while (decNum > 0){
        int rem = decNum%2 ;
        decNum = decNum/2 ;
        ans = ans + (rem*pow) ;
        pow = pow * 10 ;
    }
    return ans;
}

int main(){
    cout << dec_bin(50) << endl;
    return 0;
}