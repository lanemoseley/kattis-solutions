#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct info {
   string name;
   string rank;

};

bool compareFunc(info a, info b)
{
   for (size_t i = 0; i < a.rank.size() && i < b.rank.size(); ++i)
   {
      if (a.rank[i] < b.rank[i])
         return true;
      if (a.rank[i] > b.rank[i])
         return false;
   }

   if (a.rank.size() == b.rank.size())
      return a.name < b.name;
   
   if (a.rank.size() > b.rank.size())
      return true;

   return false;
}

void calcRank(string str, string &rank)
{
   string temp;

   size_t pos = str.rfind("-");
   while (pos != string::npos)
   {
      temp = str.substr(pos + 1);
      str.erase(str.end() - (str.size() - pos), str.end());
      pos = str.rfind("-");

      if (temp == "upper")
      {
         rank.push_back('A');
      }
      if (temp == "middle")
      {
         rank.push_back('B');
      }
      if (temp == "lower")
      {
         rank.push_back('C');
      }
   }

   if (pos == string::npos)
   {
      if (str == "upper")
      {
         rank.push_back('A');
      }
      if (str == "middle")
      {
         rank.push_back('B');
      }
      if (str == "lower")
      {
         rank.push_back('C');
      }
   }

   if (rank.size() < 10)
   {
      for (int i = rank.size() - 1; i < 10; ++i)
         rank.push_back('B');
   }

   return;
}

int main()
{
   int cases, numPeople;
   
   cin >> cases;

   do {
      cin >> numPeople;

      string classStr;
      vector<info> theInfo;
      info temp;

      cin.ignore();

      do {
         getline(cin, temp.name, ':');
         cin.ignore();
         getline(cin, classStr, ' ');
         
         calcRank(classStr, temp.rank);
         theInfo.push_back(temp);

         getline(cin, classStr);
         classStr.clear();
         temp.rank.clear();
         temp.name.clear();

      } while ( --numPeople );

   sort(theInfo.begin(), theInfo.end(), compareFunc);
   
   for (auto x : theInfo)
      cout << x.name << endl;
   for (int i = 0; i < 30; ++i)
      cout << "=";
   cout << endl;

   theInfo.clear();

   } while ( --cases );

   return 0;
}
/*
2
5
mom: upper-upper-lower-middle class
dad: middle-middle-middle-lower-middle class
queenelizabeth: upper-upper-upper class
chair: lower-lower class
unclebob: middle-middle-lower-middle class
5
mom: upper-upper-lower-middle class
dad: middle-middle-middle-lower-middle class
queenelizabeth: upper-upper-upper class
chair: lower-lower class
unclebob: middle-middle-lower-middle class
*/