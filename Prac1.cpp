#include <iostream>
using namespace std;

main()
{
	int a, *ptr, i;
	a = 10;
	cout << a << endl;
	cout << &a << endl;
	ptr = &a;
	cout << ptr << endl;
	i = *(&a);
	cout << i << endl;
	
}
