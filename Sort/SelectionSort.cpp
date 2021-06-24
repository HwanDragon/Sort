#include "SelectionSort.h"
#include <iostream>
#include "Printer.h"

/// <summary>
/// 선택정렬
/// </summary>
/// <param name="array">정렬할 배열</param>
/// <param name="size">정렬할 배열 사이즈</param>
/// <param name="showOption">정렬과정 보기</param>
void SelectionSort::sort(int* array, int size, bool showOption)
{
	// 선택정렬은 i = 0 부터 n 까지 중 가장 큰값을 선택하여 가장 마지막으로 보내고, 
	// 값을 하나 감소시킨 뒤, i = 0 부터 n - 1까지 검토... 그리고 앞의 과정을 반복함
	int maxIndex = 0;
	for (int i = size - 1; i >= 0; i--)
	{
		maxIndex = 0;
		for (int j = 0; j <= i; j++)
		{
			if (array[j] > array[maxIndex])
				maxIndex = j;
		}

		int temp = array[i];
		array[i] = array[maxIndex];
		array[maxIndex] = temp;

		// 정렬과정 보기
		if (showOption == true)
		{
			std::cout << "index " << i << " : ";
			Printer::print(array, size);
		}
	}
}