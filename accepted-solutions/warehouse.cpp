#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct inventory {
    string item;
    int quantity;
};

bool compare(inventory &a, inventory &b)
{
    if (a.quantity == b.quantity)
        return  a.item < b.item;
    
    return a.quantity > b.quantity;
}

int main()
{
    int n;
    cin >> n;

    do {
        int num;
        vector<inventory> items;
        cin >> num;

        for (int i = 0; i < num; ++i)
        {
            string s;
            int q;

            cin >> s;
            cin >> q;

            bool found = false;
            for (unsigned int j = 0; j < items.size(); ++j)
            {
                if (items[j].item == s)
                {
                    items[j].quantity += q;
                    found = true;
                }
            }

            if (!found)
            {
                items.push_back(inventory{s, q});
            }
        }

        sort(items.begin(), items.end(), compare);

        cout << items.size() << endl;
        
        for (auto x : items)
        {
            cout << x.item << " " << x.quantity << endl;
        }

    } while (--n);

    return 0;
}