#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main () {

    int num, posi;
    cin>>num>>posi;

    int mask = 1;
    mask <<= posi;

    if ( (mask & num) != 0 )
        cout<<"SET BIT";
    else
        cout<<"UNSET BIT";

    return 0;
}