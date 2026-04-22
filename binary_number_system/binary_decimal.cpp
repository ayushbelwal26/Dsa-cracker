// #include <bits/stdc++.h>
// using namespace std;
// int bin_dec(int binNum){
//     int power = 0 , ans = 0 ;
//     while(binNum > 0){
//         ans = ans + (binNum%10*(pow(2,power))) ;
//         binNum = binNum/10 ;
//         power++; 
//     }
//     return ans;
// }

// int main(){
//     cout << bin_dec(1100101);
//     return 0;
// }
// THE ABOVE METHOD IS CORRECT BUT POW IS NOT RECOMMENDED BECAUSE ITS NOT EFFICIENT SO BELOW METHOD CAN BE USED

#include <bits/stdc++.h>
using namespace std;
int bin_dec(int binNum){
    int power = 1 , ans = 0 ;
    while(binNum > 0){
        ans = ans + (binNum%10*power) ;
        binNum = binNum/10 ;
        power *= 2; 
    }
    return ans;
}

int main(){
    cout << bin_dec(1100101);
    return 0;
}