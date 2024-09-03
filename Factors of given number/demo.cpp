#include<bits/stdc++.h>
using namespace std;

void getAllFactors() {

    int number;
    cin>>number;
    vector<int> factors;

    for ( int i = 1; i*i <= number; i++ ) {
        if ( number % i == 0 ) {
            factors.push_back( i );
            if ( i != number/i )
                factors.push_back( number / i );
        }

    }

    sort( factors.begin(), factors.end() );

    for ( auto& i : factors )
        cout<< i <<" , ";

}

int main () {

    // optimal O( root N )
    getAllFactors();

    return 0;
}