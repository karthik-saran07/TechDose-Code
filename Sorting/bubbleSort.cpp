#include<bits/stdc++.h>
using namespace std;

void bubbleSort ( vector<int>& arr ) {
    for ( int i = 0; i < arr.size(); i++ ) {
        bool flag = false;
        for ( int j = 0; j < arr.size()-i; j++ ) {
            if ( arr[j] > arr[j+1] ) {
                flag = false;
                swap ( arr[j], arr[j+1] );
            }
            if ( flag )
                break;
        }
    }
}

int main () {

    vector<int> arr = { 5, 4, 3, 2 ,1 };

    bubbleSort( arr );

    for ( auto& i : arr )
        cout<<i<<" ";

    return 0;
}