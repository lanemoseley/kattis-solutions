#include <iostream>
using namespace std;

int main()
{
    int hours, min;

    cin >> hours;
    cin >> min;

    min -= 45;

    if (min < 0)
    {
        if (hours == 0)
            hours = 23;
        else
            --hours;

        min += 60;
    }    

    cout << hours << " " << min << endl;

    return 0;
}