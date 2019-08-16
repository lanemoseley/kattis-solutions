#include <iostream>

int main()
{
    long long count = 0; // 64 bit number (used as stack)
    char animal;
    int n;

    std::cin >> n;

    do {
        do { std::cin >> animal; } while ( animal != 'O' && animal != 'Z');

        count <<= 1;

        if ( animal == 'O' )
            count |= 1;

        n--;
    } while ( n > 0 );

    std::cout << count << std::endl;

    return 0;
}