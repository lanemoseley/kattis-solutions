#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    int n, isAdj;
    map<int, set<int>> adjList;
    set<int> strong;

    cin >> n;
    while (n != -1)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> isAdj;

                if (isAdj)
                    adjList[i].insert(j);
            }
        }

        for (int i = 0; i < adjList.size(); ++i)
        {
            for (auto j : adjList[i])
            {
                for (auto k : adjList[j])
                {
                    if (k != i && adjList[i].find(k) != adjList[i].end())
                    {
                        strong.insert(k);
                    }
                }
            }
        }

        for (int i = 0; i < n; ++i)
        {
            if (strong.find(i) == strong.end())
                cout << i << (i == n ? "\n" : " ");
        }

        cin >> n;
        adjList.clear();
        strong.clear();
    }

    return 0;
}