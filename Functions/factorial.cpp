#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if (n <= 0){
        return 0;
    }
    int f = 1;
    for(int i = 1 ; i <= n ; i++){
        f = f*i ;
    }
    return f ;
}

int main(){
    int n;
    cout << fact(6) << endl;
    cout << fact(-3);
    return 0;
}