#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int b, n;
    double p;
    cin >> n;

    cout << fixed << setprecision(4);

    do {
        cin >> b >> p;
        double BPM = ( 60.0 / p ) * b; 
        cout << BPM - ( 60.0 / p ) << " " << BPM << " " << BPM + ( 60.0 / p ) << endl;
    } while ( --n );

    return 0;
}