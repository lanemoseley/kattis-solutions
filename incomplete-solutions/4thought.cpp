#include <iostream>
#include <string>
#include <map>

using namespace std;

string forethought(int num)
{
    string result = "no solution";
    int left[] = {0, 1, 8, 16};
    int right[] = {0, 1, 8, 16};

    map<int, string> key = {
        {16, "4 * 4"}, {8, "4 + 4"}, {1, "4 / 4"}, {0, "4 - 4"} 
    };

    // for left and right sides 0, 1, 8, 16 are possible values
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (num == 256)
            {
                result = "4 * 4 * 4 * 4 = 256";
            }

            if (num == 68)
            {
                result = "4 * 4 * 4 + 4 = 68";
            }

            if (num == 60)
            {
                result = "4 * 4 * 4 - 4 = 60";
            }

            if (num == -60)
            {
                result = "4 - 4 * 4 * 4 = -60";
            }

            if (left[i] + right[j] == num)
            {
                result = key.at(left[i]) + " + " + key.at(right[j]) + " = " + to_string(num);
            }

            if (left[i] - right[j] == num)
            {
                result = key.at(left[i]) + " - " + key.at(right[j]) + " = " + to_string(num);
            }
        }
    }

    return result;
}

int main()
{
    int n, val;
    cin >> n;

    do {

        cin >> val;
        cout << forethought(val) << endl;

    } while (--n);

    return 0;
}