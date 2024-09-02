#include<bits/stdc++.h>
using namespace std;

int main() {

    int num;
    cin>>num;
    int newNum = log2( num );
    if ( pow(2, newNum) == num )
        cout<<"Power of 2";
    else
        cout<<"Not power of 2";

    return 0;
}
