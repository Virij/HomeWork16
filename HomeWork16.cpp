#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

int main()
{
	const int N = 4;
	int array[N][N];
	auto now = time(nullptr);
	const auto ltm = localtime(&now);
	auto ost = ltm->tm_mday % N;
	auto sum = 0;

	for (auto i = 0; i < N; i++)
	{
		for (auto j = 0; j < N; j++)
		{
			array[i][j] = i + j;
			std::cout << array[i][j] << " ";
			if (i == ost)
			{
				sum += array[i][j];
			}
		}
		std::cout << std::endl;
	}
	std::cout << "string:" << ost << "\n" << "number:" << sum << std::endl;
}