#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int calc(string& str, char c)
{
	int counter = 0;
	const char* pch = str.c_str();
	while (*pch != '\0')
	{
		if (*pch == c)
			counter++;
		++pch;
	}
	return counter;
}

int main()
{
	string str = "i am prof___essional ";

	int x = calc(str, '_');

	size_t n = std::count(str.begin(), str.end(), 'o');

	cout << calc(str, 'o') << endl;
}