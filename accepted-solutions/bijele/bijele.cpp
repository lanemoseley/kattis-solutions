#include <iostream>
using namespace std;

enum chessPieces { KING = 1, QUEEN = 1, ROOKS = 2, BISHOPS = 2,
                   KNIGHTS = 2, PAWNS = 8 };

int main()
{
    int i;
    int pieces[] = { KING, QUEEN, ROOKS, BISHOPS, KNIGHTS, PAWNS };
    int out[6];

    for ( i = 0; i < 6; ++i )
    {
        cin >> out[i];
        out[i] = pieces[i] - out[i];
    }

    for ( i = 0; i < 6; ++i )
        cout << out[i] << ( i == 5 ? "\n" : " " );

    return 0;
}