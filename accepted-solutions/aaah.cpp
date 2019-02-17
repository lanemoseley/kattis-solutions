#include <iostream>

using namespace std;

int main()
{
    int d_count = 0;
    int j_count = 0;
    char aah;

    while (cin.peek() != '\n')
    {
        cin >> aah;
        if (aah == 'a')
            ++j_count;
    }

    cin.ignore();
    
    while (cin.peek() != '\n')
    {
        cin >> aah;
        if (aah == 'a')
            ++d_count;
    }

    cout << (j_count >= d_count ? "go" : "no") << endl;

    return 0;
}