#include<bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes () {

    cout<<"Enter n to print primes : ";
    int num;
    cin>>num;

    vector<bool> result ( num + 1, true );

    for ( int i = 2; i*i <= num; i++ ) {
        if ( result[i] ) {
            for ( int j = i*i; j <= num; j += i )
                result[j] = false;
        }
    }

    for ( int i = 2; i <= num; i++ ) {
        if ( result[i] )
            cout<<i<<" ";
    }

}

int main () {

    SieveOfEratosthenes();

    return 0;
}