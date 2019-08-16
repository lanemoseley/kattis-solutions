#include <iostream>

using namespace std;

int main()
{
   int n;
   cin >> n;
   do {
      int num;
      cin >> num;
      if (num >= 5)
         cout << 0 << endl;
      
      else
      {
         int res = 1;
         for (int i = 1; i <= num; ++i)
         {
            res *= i;
         }
         cout << res % 10 << endl;
      }
      

   } while (--n);
   return 0;
}