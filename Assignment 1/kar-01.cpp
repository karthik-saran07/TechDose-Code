#include <bits/stdc++.h>
using namespace std;

int countSetBits( int number ) {
    int count = 0;
    while ( number != 0 ) {
        if ( number & 1  )
            count += 1;
        number >>= 1;
    }
    return count;
}


int main()
{

    int number;
    cin>>number;
    cout<<countSetBits(number);
    
    return 0;
};
