#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
   int num, queries, sum;
   cin >> num >> queries;

   vector<bool> primes(num + 1, true);
   primes[0] = false;
   primes[1] = false;
   sum = num - 1;
   int m = sqrt(num);

   for (int i = 2; i <= m; ++i)
   {  
      if (primes[i])
      {
         for (int j = i * 2; j <= num; j += i)
         {
            if (primes[j])
            {
               --sum;
               primes[j] = false;
            }
         }
      }   
   }

   cout << sum << endl;

   do {

      cin >> num;
      cout << primes[num] << endl;

   } while ( --queries );

   return 0;
}