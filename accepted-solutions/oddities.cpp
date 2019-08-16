#include <iostream>

using namespace std;

int main()
{
    int num, x;

    cin >> num;
    
    do {
        cin >> x;
        
        if ( x & 1 )
            cout << x << " is odd" << endl;
        
        else
            cout << x << " is even" << endl;
        
        } while( --num > 0 );
}