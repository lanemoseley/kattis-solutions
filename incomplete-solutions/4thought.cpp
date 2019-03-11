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
        {0, "4 - 4"}, {1, "4 / 4"}, {8, "4 + 4"}, {16, "4 * 4"}
    };

    // for left and right sides 0, 1, 8, 16 are possible values
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            // need to handle all operators being * or /
            // fails for n = 64
            if (num == 256)
            {
                result = key.at(left[i]) + " * " + key.at(right[j]) + " = " + to_string(num);
            }

            /*
            if (right[j] != 0 && left[i] / right[j] == num)
            {
                result = key.at(left[i]) + " / " + key.at(right[j]) + " = " + to_string(num);
            }
            */

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