#include <iostream>
#include <string>

using namespace std;

int main()
{
    string jon;
    string doctor;

    getline(cin, jon);
    getline(cin, doctor);

    cout << (jon.size() >= doctor.size() ? "go" : "no") << endl;

    return 0;
}