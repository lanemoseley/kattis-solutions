#include <iostream>

using namespace std;

int main()
{
	int count = 0;
	char c;

	while (cin.peek() != '\n' && cin >> c)
	{
		if (c == 's' && cin.peek() == 's')
		{
			cout << "hiss" << endl;
			return 0;
		}
	}

	cout << "no hiss" << endl;

	return 0;
}
