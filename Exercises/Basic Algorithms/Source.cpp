#include <iostream>


//Exercise 1

//int main() {
//
//	int N = 23 * 45;
//	int sum = 0;
//	while (N > 0)
//	{
//		sum += N % 10;
//		N /= 10;
//	}
//	std::cout << sum;
//}

//Exercise 2

//int main() {
//	int N = 1;
//	bool isPrime = true;
//	for (size_t i = 2; i < sqrt(N); i++)
//	{
//		if (!isPrime)
//			break;
//		if (N % i == 0)
//		{
//			isPrime = false;
//		}
//	}
//	return (isPrime);
//}

//Exercise 3

//int main() {
//	int input = 19;
//	if (input < 2)
//		return 0;
//	for (size_t i = 2; i <= input; i++)
//	{
//		int currentNum = i;
//			bool isPrime = true;
//			for (size_t i = 2; i <= sqrt(currentNum); i++)
//			{
//				if (!isPrime)
//					break;
//				if (currentNum % i == 0)
//				{
//					isPrime = false;
//				}
//			}
//			if (isPrime)
//			std::cout << currentNum << " ";
//	}
//}

//Exercise 4

int main() {
	int input = 78;
	int currentInput = input;
	bool isPrime = true;

	for (size_t i = 2; i <= input;)
	{
		if (i == 1)
			break;

		int currentNum = i;
		isPrime = true;
		size_t j = 2;

		for (j = 2; j <= sqrt(currentNum);j++)
		{
			if (currentNum % j == 0)
			{
				isPrime = false;
			}
			if (!isPrime)
				break;
		}

		if (isPrime)
		{
			std::cout << currentNum << " ";
			currentInput /= currentNum;
			i = currentInput;
		}
		else
		{
			std::cout << j << " ";
			currentInput /= j;
			i = currentInput;
		}
	}

}