#include <iostream>
using namespace std;

int main()
{
    int count = 0, n, t;
    cin >> n;


    do {
        cin >> t;
        if (t < 0)
            ++count;
    } while (--n);

    cout << count << endl;

    return 0;
}
