#include <iostream>

using namespace std;

void shiftZeros(int *in, int *out)
{
    int boardSize = 4;
    int i, j = 0;

    for (i = 0; i < boardSize; ++i)
    {
        if (in[i] != 0)
        {
            out[j] = in[i];
            ++j;
        }
    }

    while (j < boardSize)
    {
        out[j] = 0;
        ++j;
    }
}

void combineTiles(int *tiles)
{
    int boardSize = 4;
    int i, j;

    for (i = 0; i < boardSize - 1; ++i)
    {
        if (tiles[i] == tiles[i + 1])
        {
            tiles[i] = 2 * tiles[i];
            tiles[i + 1] = 0;
            
            // shift zeros
            for (j = i; j < boardSize - 1; ++j)
            {
                if (tiles[j] == 0 && tiles[j + 1] != 0)
                {
                    tiles[j] = tiles[j + 1];
                    tiles[j + 1] = 0;
                }
            }
        }
    }
}

int main()
{
    int count, direction, i;
    int board[16] = {0};
    int result[16] = {0};

    for (i = 0; i < 4; ++i)
        cin >> board[i];

    cin >> direction;

    // handle zeros
    shiftZeros(board, result);

    // combine tiles
    combineTiles(result);

    // left
    if (direction == 0)
    {
        for (i = 0; i < 4; ++i)
            cout << result[i] << ( ( i + 1 ) % 4 == 0 ? "\n" : " " );
    }

    // right
    if (direction == 2)
    {
        count = 0;

        for (i = 0; i < 4; ++i)
            if (result[i] == 0)
            {
                count = i;
                i = 4;
            }

        for (i = 0; i < 4 - count; ++i)
            cout << "0" << ( ( i + 1 ) % 4 == 0 ? "\n" : " " );
        for (i = 0; i < count; ++i)
            cout << result[i] << ( ( i + 1 ) % 4 == 0 ? "\n" : " " );
    }

    return 0;
}