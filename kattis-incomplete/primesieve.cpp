#include <iostream>

using namespace std;

int isPrime(int x)
{
     if (x == 1)
   {
      return 0;
   }

   for (int i = 2; i < x; ++i)
   {
      if (x % i == 0)
      {
         return 0;
      }
   }

   return 1;
}

int main()
{
   int n, q, x, sum = 0;

   cin >> n;
   cin >> q;

   for (int i = 2; i <= n; ++i)
   {
      if (isPrime(i))
         ++sum;
   }

   cout << sum << endl;

   do {

      cin >> x;
      cout << isPrime(x) << endl;

   } while (--q);

   return 0;
}