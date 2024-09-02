#include<bits/stdc++.h>
using namespace std;

int main() {

    int num;
    cin>>num;
    int newNum = log10( num );
    if ( pow(10, newNum) == num )
        cout<<"Power of 10";
    else
        cout<<"Not power of 10";

    return 0;
}
