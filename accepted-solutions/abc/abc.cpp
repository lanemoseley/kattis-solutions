#include <iostream>

using namespace std;

int main()
{
    int i, j, temp;
    int numbers[3];
    char order[4];

    for (i = 0; i < 3; ++i)
        cin >> numbers[i];

    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
            if (numbers[i] < numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }

    cin.ignore();
    cin.getline(order, 4);

    for (i = 0; i < 3; ++i)
    {
        cout << (order[i] == 'A' ? numbers[0] : (order[i] == 'B' ? numbers[1] : numbers[2]));
        cout << (i == 2 ? "\n" : " ");
    }

    return 0;
}
