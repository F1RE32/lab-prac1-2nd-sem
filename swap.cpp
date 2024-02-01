#include <iostream>
using namespace std;

void swap (int * a, int * b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

main()
{
	int x, y;
	x = 12;
	y = 24;
	cout << "x before swapping : " << x << endl;
	cout << "y before swapping : " << y << endl;
	swap(&x, &y);
	cout << "x after swapping: " << x << endl;
	cout << "y after swapping : " << y << endl;
}
