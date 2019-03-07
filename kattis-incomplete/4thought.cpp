#include <iostream>
#include <map>
#include <math.h>

using namespace std;

const char operators[] = { '*', '*', '*', '/', '/', '/', '+', '+', '+', '-', '-', '-' };

int checkEquation(int indices[]);
bool permute(int indices[], bool used[], int n, int pos, int target);
void printEquation(int indices[], int target);

int main()
{
    int target, trials;
    map<int, string> commonEquations = { {128, "4 * 4 * 4 * 4 = 128"}, {68, "4 * 4 * 4 + 4"},
                                        {60, "4 * 4 * 4 - 4"}, {-16, "4 - 4 - 4 * 4"},
                                        {32, "4 * 4 + 4 * 4"}, {24, "4 * 4 + 4 + 4"} }; 
    std::map<int, string>::iterator it;


    cin >> trials;

    do {
        cin >> target;

        bool used[12] = {false};
        int indices[12] = {0}; 

        it = commonEquations.find(target);
        if (it != commonEquations.end())
            cout << it->second << endl;

        else if (abs(target / 4) >= 2 && abs(target) % 4 > 1)
            cout << "no solution" << endl;

        else if (!permute(indices, used, 12, 0, target))
            cout << "no solution" << endl;

    } while (--trials > 0);

    return 0;
}

int checkEquation(int indices[])
{
    int sum = 4;

    for (int i = 0; i < 3; ++i)
    {
        if (operators[indices[i]] == '*')
        {
            sum += 4;
        }
        else if (operators[indices[i]] == '/')
        {
            sum /= 4;
        }
        else if (operators[indices[i]] == '+')
        {
            sum += 4;
        }
        else if (operators[indices[i]] == '-')
        {
            sum -= 4;
        }
    }

    return sum;
}

bool permute(int indices[], bool used[], int n, int pos, int target)
{
    int i;

    if (pos == n)
    {
        if (checkEquation(indices) == target)
        {
            printEquation(indices, target);
            return true;
        }

        return false;
    }

    for (i = 0; i < n; ++i)
    {
        if (!used[i])
        {
            used[i] = true;
            indices[pos] = i;

            if (permute(indices, used, n, pos + 1, target))
                return true;

            used[i] = false;
        }
    }

    return false;
}

void printEquation(int indices[], int target)
{
    cout << "4 " << operators[indices[0]] << " 4 " << operators[indices[1]] <<
    " 4 " << operators[indices[2]] << " 4 = " << target << endl;
}