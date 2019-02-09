#include <iostream>

using namespace std;

int main()
{
    int n, carrots;

    cin >> n;

    cin.ignore();
    cin >> carrots;

    do {
        cin.ignore('\n');    
        n--;
    } while (n > 0);

    cout << carrots << endl;

    return 0;
}