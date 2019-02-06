#include <iostream>

static int reverse( int x )
{
    int r = 0;

    do {
        r <<= 1;
        
        if ( x & 1 )
            r |= 1;

        x >>= 1;
    }  while( x != 0 );

    return r;
}

int main()
{
    int n;

    std::cin >> n;
    n = reverse( n );
    std::cout << n << std::endl;

    return 0;
}