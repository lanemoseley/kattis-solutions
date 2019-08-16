#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   long double ws = 0.0, lc = 0.0, uc = 0.0, sym = 0.0, total = 0.0;
   char temp;

   while (cin >> temp && temp != '\n')
   {
      if (temp == '_')
         ws += 1.0;

      else if (isupper(temp))
         uc += 1.0;
      else if (islower(temp))
         lc += 1.0;
      else
         sym += 1.0;
      total += 1.0;

   }

   cout << setprecision(16) << ws / total << "\n" << lc / total << "\n" << uc / total << "\n" << sym / total << "\n";

   return 0;
}