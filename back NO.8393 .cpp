#include<iostream>
using namespace std;
int main()
{
    int A ,B = 0 ;
    cin >> A ;
    for(int i=0; i<A; i++) {
        B += (i+1) ;
    }

    cout << B << endl ;

    return 0 ;
}
