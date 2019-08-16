#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int num, width, height, length;
    vector<int> matchLengths;

    cin >> num;
    cin >> width;
    cin >> height;

    do {
        cin >> length;
        matchLengths.push_back(length);
    } while ( --num > 0 );

    for (int i = 0; i < int( matchLengths.size( ) ); ++i )
        cout << ( ( matchLengths[i] <= width ||
        matchLengths[i]  <= height || matchLengths[i] <= pow( pow( height, 2.0 )
        + pow( width, 2.0 ), 1 / 2.0 ) ) ? "DA\n" : "NE\n" );

    return 0;
}