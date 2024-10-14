#include <iostream>
using namespace std;

int main()

{
	int score;
	cout << "Please enter your score: " << endl;
	cin >> score;
	if (score >= 80 && score <= 100)
	{
		cout << "Your score is A* " << endl;
	}
	else if (score >= 70 && score <= 79)
	{
		cout << "Your score is A " << endl;
	}
	else if (score >= 60 && score <= 69)
	{
		cout << "Your score is B " << endl;
	}
	else if (score >= 50 && score <= 59)
	{
		cout << "Your score is C " << endl;
	}
	else if (score >= 40 && score <= 49)
	{
		cout << "Your score is D " << endl;
	}
	else if (score >= 1 && score <= 39)
	{
		cout << "Your score is F " << endl;
	}
	else if (score == 0)
	{
		cout << "Your score is U " << endl;
	}
	else
	{
		cout << "Wrong input " << endl;
	}
	return 0;
}
