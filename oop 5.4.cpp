#include <iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v;
	int size, n;
	int length = 1, count = 1;

	cout << "Enter size:";
	cin >> size;
	cout << "Enter vector element"<<endl;

	for (int i = 0; i < size; i++)
	{
		cin >> n;
		v.push_back(n);
	}

	vector<int>::iterator p = v.begin();
	while (p != v.end())
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;
	
	for (vector<int>::iterator i = v.begin(); i < v.end() - 1; ++i)
	{
		if (*i <= *(i + 1))
		{
			count++;
		}
		else
		{
			if (length < count)
			{
				length = count;
			}
			count = 1;
		}
	}

	if (length < count)
	{
		length = count;
	}

	cout << "Max length:" << length << " ";
	return 0;
}