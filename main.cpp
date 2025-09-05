#include <iostream>

using namespace std;

void sort(int arr[], int size)
{
    for (int gap = size / 2; gap > 0; gap = gap / 2)
	{
		for (int i = gap; i < size; i++)
		{
			int val = arr[i];
			int j = i - gap;
			for (; j >= 0; j-=gap)
			{
				if (arr[j] <= val)
				{
					break;
				}
				arr[j + gap] = arr[j];
			}
			arr[j + gap] = val;
		}
	}
}

int main()
{
    int arr[] = {6, 54, 12, 89, 75, 122, 366, 1026}
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    return 0;, 
}