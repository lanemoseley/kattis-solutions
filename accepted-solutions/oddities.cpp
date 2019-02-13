#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num, temp;
    vector<int> input;

    cin >> num;
    do {
        cin >> temp;
        input.push_back(temp);
    } while( --num > 0 );

    for ( auto x : input )
    {
        if ( x & 1 )
            cout << x << " is odd" << endl;
        else
            cout << x << " is even" << endl;
    }
}