#include<iostream>
using namespace std;
int main()
{
    int A;
    cin >> A ;
    for(int i=0; i<9 ; i++) {
        cout << A << " * " << (i+1) << " = " << A*(i+1) << endl ;
    }

    return 0 ;
}
