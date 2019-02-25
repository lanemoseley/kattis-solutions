#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double numerator, denom, temp;

    cin >> denom;
    numerator = 0;
    int blah = denom;
    for (int i = 0; i < blah; ++i)
    {
        cin >> temp;
        if (temp < 0)
        {
            --denom;
        }
        else
            numerator += temp;
    }

    cout << setprecision(16) << numerator / denom << endl;

    return 0;
}