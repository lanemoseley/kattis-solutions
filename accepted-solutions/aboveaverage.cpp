#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int cases, num, temp;
    
    vector<int> grades;
    vector<float> results;
    
    float average, percentAboveAverage;

    cin >> cases;

    do
    {
        cin >> num;
        
        // read in num integers
        do
        {
            cin >> temp;
            grades.push_back(temp);
        } while (--num > 0);

        // find floating point average
        for (auto x : grades)
            average += x;
        average /= float( grades.size() );
        
        // find number of grades above average
        for ( auto x : grades )
            if ( x > average )
                ++percentAboveAverage;

        // turn number of grades above average into a percent
        percentAboveAverage /= float ( grades.size() );
        percentAboveAverage *= 100;
        results.push_back(percentAboveAverage);
        
        // clear variables and vector for next run
        average = 0.0;
        grades.clear( );
        percentAboveAverage = 0.0;
        
    } while (--cases > 0);
    
    for ( auto x : results )
        cout << fixed << setprecision(3) << x << "%" << endl;

    return 0;
}