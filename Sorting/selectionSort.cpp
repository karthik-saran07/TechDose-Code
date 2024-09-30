#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr ) {
    for ( int i = 0; i < arr.size() - 1; i++ ) {
        int index = i;
        for ( int j = i + 1; j < arr.size(); j++ ) {
            if ( arr[j] <= arr[index] )
                index = j;
        }
        if ( index != i )
            swap ( arr[index], arr[i] ); 
    }
}

int main () {

    //not a stable algorithm ( order is not preserved )
    // Time - O (n^2)

    vector<int> arr = { 5, 4, 3, 2, 1 };

    selectionSort(arr);

    for ( auto& i : arr ) 
        cout<<i<<" ";

    return 0;
}