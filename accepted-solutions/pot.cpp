#include <iostream>

int main()
{
    int n = 0;
    int num = 0;
    int pow = 0;
    int res = 1;
    unsigned int sum = 0;

    std::cin >> n;

    do {
        std::cin >> num;

        pow = num % 10;
        num = num / 10;

        res = 1;
        for ( int i = 0; i < pow; ++i )
            res *= num;
        
        sum += res;

        --n;
    } while ( n > 0 );


    std::cout << sum << std::endl;

    return 0;
}
