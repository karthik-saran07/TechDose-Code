using namespace std;
#include<bits/stdc++.h>


bool helper() {
    int num;
    cin>>num;

    if ( num <= 1 )
        return false;

    for ( int i = 2; i*i <= num; i++ ) {
        if ( num % i == 0 ) {
            return false;
        }

    }
    return true;

}

int main () {

    bool check = helper();
    if ( check )
        cout<<"Is a prime";
    else
        cout<<"Not a prime";
    return 0;
}