#include <iostream>

using namespace std;

int main()
{
   int x[3];
   int y[3];
   int newX, newY;

   for (int i = 0; i < 3; ++i)
   {
      cin >> x[i];
      cin >> y[i];
   }

   bool Xswap = false;
   bool Yswap = false;
   newX = x[0];
   newY = y[0];
   for (int i = 1; i < 3; ++i)
   {
      if (newX == x[i])
         for (int j = 0; j < 3; ++j)
            if (!Xswap && newX != x[j])
               {
                  newX = x[j];
                  Xswap = true;
               }

      if (newY == y[i])
         for (int j = 0; j < 3; ++j)
            if (!Yswap && newY != y[j])
               {
                  newY = y[j];
                  Yswap = true;
               }
   }

   cout << newX << " " << newY << endl;

   return 0;
}