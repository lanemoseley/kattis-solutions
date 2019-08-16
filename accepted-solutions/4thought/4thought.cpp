#include <iostream>
#include <string>
#include <vector>
using namespace std;


int eval(char op, int a, int b)
{
    if (op == '*') return a * b;
    if (op == '/') return a / b;
    if (op == '+') return a + b;
    return a - b;
}

string forethought(int num)
{
    string result = "no solution";
    char operators[] = {'*', '/', '+', '-'};
    
    // permute operators array
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            for (int k = 0; k < 4; ++k)
            {
                vector<char> permutedOperators = { operators[i], operators[j], operators[k] };
                vector<int> sumarr = {4, 4, 4, 4};
                for (int m = 0; m < permutedOperators.size(); ++m)
                {
                    if (permutedOperators[m] == '*' || permutedOperators[m] == '/')
                    {
                        sumarr[m] = eval(permutedOperators[m], sumarr[m], sumarr[m+1]);
                        permutedOperators.erase(permutedOperators.begin() + m);
                        sumarr.erase(sumarr.begin() + m + 1);
                        --m;
                    }
                }
                for (int m = 0; m < permutedOperators.size(); ++m)
                {
                    if (permutedOperators[m] != '*' && permutedOperators[m] != '/')
                    {
                        sumarr[m] = eval(permutedOperators[m], sumarr[m], sumarr[m+1]);
                        permutedOperators.erase(permutedOperators.begin() + m);
                        sumarr.erase(sumarr.begin() + m + 1);
                        --m;
                    }
                }

                if (sumarr[0] == num)
                {
                    result = "4 ";
                    result.push_back(operators[i]);
                    result += " 4 ";
                    result.push_back(operators[j]);
                    result += " 4 ";
                    result.push_back(operators[k]);
                    result += " 4 = " + to_string(num);
                }
                
            }
        }
    }

    return result;
}

int main()
{
    int n, val;
    cin >> n;

    do {

        cin >> val;
        cout << forethought(val) << endl;

    } while (--n);

    return 0;
}