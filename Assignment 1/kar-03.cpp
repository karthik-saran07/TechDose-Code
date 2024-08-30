#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int num, posi;
    cin>>num>>posi;

    int mask = 1;
    mask <<= posi;

    int newNum = mask | num;
    cout<< newNum;

    return 0;
}

