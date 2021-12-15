/**
*@ Siti Munizaiyanah binti Bahaman
*@ Matric No: 2116492
*@ Lab #6 Section 4
*/

#include <iostream>
using namespace std;

int *getMarks(const char answers[][5], size_t ntests);

int main()
{
	char tests[6][5] = {
		{ 'T', 'F', 'T', 'T', 'T' },
		{ 'T', 'T', 'T', 'T', 'T' },
		{ 'T', 'T', 'F', 'F', 'T' },
		{ 'F', 'T', 'F', 'F', 'F' },
		{ 'F', 'F', 'F', 'F', 'F' },
		{ 'T', 'T', 'F', 'T', 'F' },
	};

	int *marks = getMarks(tests, 6);
	for (size_t j = 0; j < 6; j++)
		std::cout << marks[j] << " ";
	system("PAUSE");
	return 0;
}

int *getMarks(const char answers[][5], size_t ntests)
{
	const char answer[5] = { 'T', 'T', 'F', 'F', 'T' };
	int *marks = new int[ntests]();
	const int mark = 5;

	for (size_t j = 0; j < ntests; j++)
		for (size_t i = 0; i < 5; i++)
			if (answers[j][i] == answer[i])
				marks[j] += mark;

	return marks;
}
