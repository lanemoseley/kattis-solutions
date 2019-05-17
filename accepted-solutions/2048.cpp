#include <iostream>
using namespace std;

int main()
{
    int move;
    int board[4][4] = {0};
 
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cin >> board[i][j];
        }
    }

    cin >> move;

    if (move == 1)
    {
        // transpose matrix

        bool didSwap[4][4] = {false};

        // if i == j don't swap
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                if (i != j && !didSwap[i][j] && !didSwap[j][i])
                {
                    int temp = board[i][j];
                    board[i][j] = board[j][i];
                    board[j][i] = temp;
                    didSwap[i][j] = true;
                    didSwap[j][i] = true;
                }
            }
        }
    }

    if (move == 2)
    {
        for (int i = 0; i < 4; ++i)
        {
            int temp = board[i][0];
            board[i][0] = board[i][3];
            board[i][3] = temp;
            temp = board[i][1];
            board[i][1] = board[i][2];
            board[i][2] = temp;
        }
    }

    if (move == 3)
    {
        // transpose matrix

        bool didSwap[4][4] = {false};

        // if i == j don't swap
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                if (i != j && !didSwap[i][j] && !didSwap[j][i])
                {
                    int temp = board[i][j];
                    board[i][j] = board[j][i];
                    board[j][i] = temp;
                    didSwap[i][j] = true;
                    didSwap[j][i] = true;
                }
            }
        }

        // reverse arrays
        for (int i = 0; i < 4; ++i)
        {
            int temp = board[i][0];
            board[i][0] = board[i][3];
            board[i][3] = temp;
            temp = board[i][1];
            board[i][1] = board[i][2];
            board[i][2] = temp;
        }
    }

    for (int i = 0; i < 4; ++i)
    {
        // move all zeros to the right
        bool swapMade = true;
        int count = 0;
        while (swapMade && count <= 4)
        {
            swapMade = false;
            for (int j = 0; j < 4; ++j)
            {
                if (j < 3 && board[i][j] == 0)
                {
                    board[i][j] = board[i][j + 1];
                    board[i][j + 1] = 0;
                    swapMade = true;
                    ++count;
                }
            }
        }

        bool tilesMerged[4] = {false};
        for (int j = 0; j < 3; ++j)
        {
            if (!tilesMerged[j+1] && !tilesMerged[j] && j < 3 && board[i][j] == board[i][j + 1])
            {
                tilesMerged[j+1] = true;
                tilesMerged[j] = true;
                board[i][j + 1] *= 2;
                board[i][j] = 0;
            }
        }

        swapMade = true;
        count = 0;
        while (swapMade && count <= 4)
        {
            swapMade = false;
            for (int j = 0; j < 4; ++j)
            {
                if (j < 3 && board[i][j] == 0)
                {
                    board[i][j] = board[i][j + 1];
                    board[i][j + 1] = 0;
                    swapMade = true;
                    ++count;
                }
            }
        }
    }

    if (move == 1)
    {
        // transpose matrix

        bool didSwap[4][4] = {false};

        // if i == j don't swap
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                if (i != j && !didSwap[i][j] && !didSwap[j][i])
                {
                    int temp = board[i][j];
                    board[i][j] = board[j][i];
                    board[j][i] = temp;
                    didSwap[i][j] = true;
                    didSwap[j][i] = true;
                }
            }
        }
    }

    if (move == 2)
    {
        for (int i = 0; i < 4; ++i)
        {
            int temp = board[i][0];
            board[i][0] = board[i][3];
            board[i][3] = temp;
            temp = board[i][1];
            board[i][1] = board[i][2];
            board[i][2] = temp;
        }
    }

    if (move == 3)
    {
        // reverse arrays
        for (int i = 0; i < 4; ++i)
        {
            int temp = board[i][0];
            board[i][0] = board[i][3];
            board[i][3] = temp;
            temp = board[i][1];
            board[i][1] = board[i][2];
            board[i][2] = temp;
        }

        // transpose matrix
        bool didSwap[4][4] = {false};

        // if i == j don't swap
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                if (i != j && !didSwap[i][j] && !didSwap[j][i])
                {
                    int temp = board[i][j];
                    board[i][j] = board[j][i];
                    board[j][i] = temp;
                    didSwap[i][j] = true;
                    didSwap[j][i] = true;
                }
            }
        }
    }

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << board[i][j] << (j == 3 ? "\n" : " ");
        }
    }

    return 0;
}