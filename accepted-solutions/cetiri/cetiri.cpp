#include <iostream>

using namespace std;

int main()
{
    int arr[3];

    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];

    // sort array
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int diff;
    if (arr[1] - arr[0] < arr[2] - arr[1])
        diff = arr[1] - arr[0];
    else
        diff = arr[2] - arr[1];
	
    if (arr[1] - arr[0] > diff)
        cout << arr[0] + diff << endl;
    else if (arr[2] - arr[1] > diff)
        cout << arr[1] + diff << endl;
    else
        cout << arr[2] + diff << endl;

    return 0;
}
