#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    float years, quality, sum = 0.0;

    cin >> n;

    do {
        cin >> quality;
        cin >> years;
        sum += quality * years;

        n--;
    } while (n != 0);

    cout << fixed << setprecision(3) << sum << endl;

    return 0;
}