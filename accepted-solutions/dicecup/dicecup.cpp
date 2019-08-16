#include <iostream>

using namespace std;

int main()
{
    int d1, d2;
    cin >> d1;
    cin >> d2;

    int *arr = new int[d1 + d2 + 1];

    for (int i = 1; i <= d1; ++i)
    {
        for (int j = 1; j <= d2; ++j)
        {
            ++arr[i + j];
        }
    }

    int max = 0;
    for (int i = 1; i <= d1 + d2; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    bool finished = false;
    while (!finished)
    {
        finished = true;
        for (int i = 0; i <= d1 + d2; ++i)
        {
            if (arr[i] == max)
            {
                finished = false;
                arr[i] = 0;
                cout << i << endl;
            }
        }
    }

    delete [] arr;

    return 0;
}