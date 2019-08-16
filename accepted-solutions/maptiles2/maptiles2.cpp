#include <iostream>
#include <string>

using namespace std;

int main()
{
    string key;
    cin >> key;

    int x = 0;
    int y = 0;

    for (int i = int(key.size()); i > 0; --i)
    {
        int mask = 1 << (i - 1);

        if (key[key.size() - i] == '1')
        {
            x |= mask;
        }

        else if (key[key.size() - i] == '2')
        {
            y |= mask;
        }

        else if (key[key.size() - i] == '3')
        {
            x |= mask;
            y |= mask;
        }
    }

    cout << key.size() << " " << x << " " << y; 

    return 0;
}