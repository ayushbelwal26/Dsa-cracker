#include <bits/stdc++.h>
using namespace std;
int mini(int a , int b){ //parameters
    if (a>b){
        return b;
    }
    else{
        return a ;
    }
}

int main(){
    int a , b ;
    cin >> a >> b;
    cout << mini(a,b); //arguments
    return 0;
}