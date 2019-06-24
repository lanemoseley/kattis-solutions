#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int smallest;
    cin >> smallest;

    vector<int> paperSizes(smallest);

    for (int i = 0; i < smallest - 1; ++i)
    {
        cin >> paperSizes[i];
    }

    float area = 420.0 * 594.0;
    vector<float> tapeLengths(smallest);
    tapeLengths[0] = 594.0;
    
    for (int i = 1; i < smallest; ++i)
    {
        tapeLengths[i] = area / tapeLengths[i - 1];
        area /= 2.0;
    }

    float tapeUsed = 0.0;
    while(paperSizes[0] < 2)
    {
        for (int i = 1; i < smallest; ++i)
        {  
            if (paperSizes[i] - 2 >= 0)
            {
                ++paperSizes[i - 1];
                paperSizes[i] -= 2;

                tapeUsed += tapeLengths[i];
            } 
        }
    }
    
    if (paperSizes[0] >= 2)
    {
        cout << tapeUsed / 1000.0 << endl;
    }

    else
    {
        cout << "impossible" << endl;
    }
    
    return 0;
}