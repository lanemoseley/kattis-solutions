#include <iostream>
#include <map>

using namespace std;

map<char, int> DOMINANT_VALUES = { {'A', 11},
                                   {'K', 4},
                                   {'Q', 3},
                                   {'J', 20},
                                   {'T', 10},
                                   {'9', 14},
                                   {'8', 0},
                                   {'7', 0} };

map<char, int> NONDOMINANT_VALUES = { {'A', 11},
                                    {'K', 4},
                                    {'Q', 3},
                                    {'J', 2},
                                    {'T', 10},
                                    {'9', 0},
                                    {'8', 0},
                                    {'7', 0} };

int main()
{
    int n, sum = 0;
    char dominant;

    cin >> n >> dominant;
    n *= 4;

    do {
        char val, suite;

        cin >> val >> suite;
        
        if (suite == dominant)
            sum +=  DOMINANT_VALUES.at(val);

        else
            sum +=  NONDOMINANT_VALUES.at(val);

    } while(--n);

    cout << sum << endl;

    return 0;
}