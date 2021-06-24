#include "BubbleSort.h"
#include <iostream>
#include "Printer.h"

/// <summary>
/// 버블정렬
/// </summary>
/// <param name="array">정렬할 배열</param>
/// <param name="size">배열 사이즈</param>
/// <param name="showOption">정렬과정 보기</param>
void BubbleSort::sort(int* array, int size, bool showOption)
{
	// 시간복잡도 n^2의 정렬
	// 버블정렬은 i = 0 부터 두개씩 비교하여 왼쪽 값이 더 크면 바꾸고
	// 오른쪽 값이 더 크면 바꾸지 않음
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}

		if (showOption == true)
		{
			std::cout << "index " << i << " : ";
			Printer::print(array, size);
		}
	}
}