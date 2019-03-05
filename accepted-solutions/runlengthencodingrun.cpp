#include <iostream>
#include <string>
using namespace std;

const int SIZE = 1000;

int main()
{
    char str[SIZE] = "";
    char out[SIZE] = "";
    char temp;
    int count, end, i, j, outIndex, start;

    cin >> temp;
    cin.ignore();

    if (temp == 'E')
    {
        cin.getline(str, SIZE);

        count = 0;
        end = 0;
        i = 0;
        outIndex = 0;
        start = 0;

        while ( i < SIZE && str[i] != '\0')
        {
            while (str[start] == str[end])
            {
                ++count;
                ++end;
            }

            out[outIndex] = str[start];
            out[++outIndex] = count + 48;
            ++outIndex;

            // reset count for next letter
            count = 0;

            // update i and start index
            i = end;
            start = end;
        }

        cout << out << endl;
        return 0;
    }

    cin.getline(str, SIZE);

    i = 0;
    j = 0;
    count = 0;
    while ( i < SIZE && str[i] != '\0')
    {
        // get the next letter and its count
        temp = str[i];
        count = str[++i] - 48;

        // insert into output array
        end = j + count;
        while( j < end )
        {
            out[j] = temp;
            ++j;
        }

        ++i;
    }

    cout << out << endl;

    return 0;
}