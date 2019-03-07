#include <iostream>
#include <vector>
using namespace std;

int friday(int dpy, int mpy, vector<int> &dpm)
{
    int firstDay = 1;
    int fridays = 0;

    for (int i = 0; i < mpy; ++i)
    {
        // if first day doesn't fall on sunday return 0, else return 1
        if (firstDay == 1 && dpm[i] > 12)
            fridays += 1;
        
        firstDay = (firstDay + dpm[i]) % 7;
    }

    return fridays;
}

int main()
{
    int n;

    cin >> n;

    do {

        int daysPerYear, monthsPerYear, mpy, temp;
        vector<int> daysPerMonth;

        cin >> daysPerYear;
        cin >> monthsPerYear;
        mpy = monthsPerYear;

        do { cin >> temp; daysPerMonth.push_back(temp);} while (--mpy);
        cout << friday(daysPerYear, monthsPerYear, daysPerMonth) << endl;

    } while (--n);

    return 0;
}