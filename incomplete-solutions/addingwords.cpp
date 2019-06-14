#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> words;
    map<int, string> values;

    string command;
    while (cin >> command)
    {
        if (command == "clear")
        {
            words.clear();
            values.clear();
        }

        else if (command == "def")
        {
            string name;
            int value;
            cin >> name >> value;

            if (words.find(name) != words.end())
            {
                int tmp = words[name];
                values.erase(tmp);
                words.erase(name);
            }

            words[name] = value;
            values[value] = name;
        }

        else if (command == "calc")
        {
            cin >> command;
            string context = command;
            string prev = command;
            int sum = words[prev];

            bool done = false;
            bool invalid = false;
            while (!done && cin >> command)
            {
                context += " " + command;
                if (command == "=")
                {
                    if (invalid || values.find(sum) == values.end())
                    {
                        cout << context << " unknown" << endl;
                    }

                    else
                    {
                        cout << context << " " << values[sum] << endl;
                    }

                    done = true;
                }

                else if (command == "+" || command == "-")
                {
                    string sign = command;
                    cin >> command;

                    if (words.find(command) == words.end())
                    {
                        context += " " + command;
                        invalid = true;
                    }

                    else
                    {
                        if (sign == "-")
                            sum -= words[command];

                        else
                            sum += words[command];
                        
                        context += " " + command;  
                    }
                }
            }
        }
    }

    return 0;
}
