#include<iostream>
using namespace std;
int main()
{
    int A , B = 1;
    while(!(cin>>A>>B).fail()) {
        cout << A+B << endl ;
    }

    return 0 ;
}
