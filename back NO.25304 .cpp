#include<iostream>
using namespace std;
int main()
{
    int A , B, C = 0 ;
    cin >> A ;
    cin >> B ;

    for(int i=0; i<B ; i++) {
        int N, P = 0;
        cin >> P >> N ;
        *&C += P * N ;
    }

    if(A == C)
        cout << "Yes" << endl ;
    else
        cout << "No" << endl ;

    return 0 ;
}
