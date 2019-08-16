#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int downtime(int n, int k, vector<int> times)
{   
    int servers = 0;
    int frontInd = 0;
    int endInd = 1;
    for (size_t i = 1; i < times.size(); ++i)
    {
        if (times[endInd] - times[frontInd] < 1000)
        {
            ++endInd;
        }
        else
        {
            ++frontInd;
            ++endInd;
        }
    }

    servers = ceil( (endInd - frontInd) / double( k ) );

    if (servers == 0)
        return 1;

    return servers;
}

int main()
{
   int n, k, t, servers = 0;
   cin >> n;
   cin >> k;

   vector<int> times;
   
   do {
      cin >> t;
      times.push_back(t);
   } while (--n);

   cout << downtime(n, k, times) << endl;

   return 0;
}