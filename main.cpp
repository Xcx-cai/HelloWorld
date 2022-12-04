#include <iostream>

using namespace std;

void sort(int arr[], int size)
{
	for(int i = 0; i < size; i++)
		for (int j = 0; j < size - 1 - i; j++)
		{
			if(arr[j] > arr[i])
			{
				int temp = arr[i];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}

}

int main()
{
	int arr[] = {12, 3, 523, 25};
	int size = sizeof(arr) / sizeof(arr[0]);
	sort(arr, size);

	return 0;
}
