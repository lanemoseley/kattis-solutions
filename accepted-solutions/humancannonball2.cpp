#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.14159265;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        double v0, theta, deltaX, h1, h2;
        cin >> v0 >> theta >> deltaX >> h1 >> h2;

        theta *= PI;
        theta /= 180.0;

        double time = deltaX / (v0 * cos(theta) );
        double height = (v0 * time * sin(theta)) - ((9.81 * time * time) / 2.0);


        if (height >= h1 + 1 && height <= h2 - 1)
            cout << "Safe" << endl;
        else
            cout << "Not Safe" << endl;
        
    }

    return 0;
}