#include<iostream>
using namespace std;
int main()
{
    int A, B, C ;
    cin >> A ;
    for(int i=0; i<A; i++) {
        cin >> B >> C ;

        cout << "Case #" << i+1 <<": " << B << " + " << C << " = " << B+C << endl ;
    }

    return 0 ;
}
