#include <iostream>
#include <bitset>

using namespace std;

int main()
{
   int n, q, x, sum = 0;
   
   cin >> n;
   cin >> q;

   bitset<100000000> arr;

   arr[0] = 0;
   arr[1] = 0;

   for (int i = 2; i < n + 1; ++i)
   {  
      bool resultFound = false;

      for (int j = 2; !resultFound && j < i; ++j)
      {
         if (i % j == 0)
         {
            resultFound = true;
            arr[i] = 0;
         }
      }

      if (arr[i])
         ++sum;
   }

   cout << sum << endl;

   do {

      cin >> x;
      cout << arr[x] << endl;

   } while ( --q );

   return 0;
}