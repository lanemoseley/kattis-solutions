#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; ++i)
        cin >> arr[i];

    bool swapMade = true;

    while (swapMade)
    {
        swapMade = false;

        for (int j = 0; j < 4; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                for (int k = 0; k < 5; ++k)
                    cout << arr[k] << (k == 4 ? "\n" : " ");

                swapMade = true;
            }
        }
    }

    return 0;
}
