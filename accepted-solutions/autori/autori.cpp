#include <iostream>

int main()
{
    char string[100] = "";

    std::cin.getline( string, 100 );

    for ( int i = 0; i < 100 && string[i] != '\n'; ++i )
       if ( isupper( string[i] ) )
              std::cout << string[i]; 

    std::cout << std::endl;

    return 0;
}
