#include <iostream>

using namespace std;

int main()
{
   int x, n, p, res = 0;

   cin >> x;
   cin >> n;

   for (int i = 0; i < n; ++i)
   {
      cin >> p;
      res += x - p;
   }

   res += x;

   cout << res << endl;

   return 0;
}