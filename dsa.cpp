#include <iostream>
using namespace std;

void  arraysum(int * arr, int size, int step )
{		
	for (int i=0; i<size; i++)
	{
	* arr += step;
	arr++ ; 
	}
}

main()
{
     int size;
    cout << "Enter the size of array" << " " ;
    cin >> size;
    int arr[size];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int step;
    cout << "Insert the number to add in each array element" << " " ;
    cin >> step;

    arraysum(arr, size, step);
      for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
