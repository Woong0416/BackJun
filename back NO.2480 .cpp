#include<iostream>
using namespace std;
int main()
{
    int A,B,C,R,M ;
    cin >> A >> B >> C ;
    if(A==B && B==C) {
        R = 10000 + 1000*A ;
    }
    else if(A==B && B!=C) {
        R = 1000 + 100*A ;
    }
    else if(A==C && A!=B) {
        R = 1000 + 100*A;
    }
    else if(A!=B && B==C) {
        R = 1000 + 100*B;
    }
    else {
        if(A>B && A>C)
            R = 100 * A ;
        else if(B >A && B >C)
            R = 100 * B ;
        else if(C>A && C>B)
            R = 100 * C ;
    }
    
    cout << R << endl ;
    
    return 0 ;
}