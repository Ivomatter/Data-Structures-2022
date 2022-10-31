#include <iostream>
#include <vector>


int* fromElement(std::vector<int> &arr, int elem) {
	int* ptr;
	int size = arr.size();
	for (size_t i = 0; i < size; i++ )
	{
		if (elem == arr[i])
		{
			ptr = &arr[i];
			return ptr;
		}
		if (i == size - 1)
		{
			ptr = &arr[i];
			return ptr;
		}
	}
	
	
}

int main()
{
	std::vector<int> v = { 6, 4, 2, 7, 10, 17, 15 };
	int* ptr = fromElement(v, 5);
	std::cout << *ptr;
}