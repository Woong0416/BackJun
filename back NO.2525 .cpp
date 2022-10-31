#include<iostream>
using namespace std;
int main()
{
    int H,M,C ;
    cin >> H >> M ;
    cin >> C;
    int K = M+C ;
    while(K >= 60) {
        K -= 60 ;
        H++ ;
    }
    if(H >= 24)
        H -= 24 ;

    cout << H << " " << K << endl ;

    return 0 ;
}
