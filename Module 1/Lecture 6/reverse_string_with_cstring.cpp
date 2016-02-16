#include<iostream>
#include<cstring>

using namespace std;

char* reverseString(char* s)
{
	int length = 0;
	length = strlen(s);
	cout << length;
	int c, i, j;

	for (
		i = 0, j = length - 1;
		i < j;
		++i, --j
		)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}

	return s;
}

int main()
{
	char str[256];
	cout << "Enter a string without spaces: ";
	cin >> str;

	cout << "Reversed string: " << reverseString(str) << endl;
}
