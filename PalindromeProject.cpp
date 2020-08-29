#include <iostream>
using std::cout;
using std::endl;
using std::cin;
bool tPalindrome(const char[], int, int);
int main()
{
	const int SIZE = 80;
	char c, string[SIZE], copy[SIZE];
	int count = 0, cCnt, x;
	//Enter Word
	cout << "\n\n*************** PALINDROME *****************\n\n";
	cout << "Please enter your word: ";
	while ((c = cin.get()) != '\n' && count < SIZE)
		string[count++] = c;
	string[count] = '\0';
	for (cCnt = 0, x = 0; string[x] != '\0'; ++x)
		if (string[x] != ' ')
			copy[cCnt++] = string[x];
	//Output Result
	cout << "\n\n***************** RESULT *******************\n\n";
	if (tPalindrome(copy, 0, cCnt - 1))
		cout << '\"' << string << "\" Great! That's a palindrome word :)" << endl;
	else
		cout << '\"' << string << "\" Wrong word! This isn’t a palindrome word :(" << endl;
	cout << "\nExiting... Thank you for using program.\n\n\n";
	return 0;
}
bool tPalindrome(const char array[], int left, int right)
{
	if (left == right || left > right)
		return true;
	else if (array[left] != array[right])
		return false;
	else
		return tPalindrome(array, left + 1, right - 1);
}