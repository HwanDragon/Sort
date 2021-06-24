#include "InsertionSort.h"
#include "Printer.h"

/// <summary>
/// 삽입정렬
/// </summary>
/// <param name="array">정렬할 배열</param>
/// <param name="size">배열 사이즈</param>
/// <param name="showOption">정렬과정 보기</param>
void InsertionSort::sort(int* array, int size, bool showOption)
{
	// 원소를 index = 1부터 정렬해 나감
	// index가 하나 증가되면
	// 앞의 원소들과 비교하여 삽입할 위치를 확인한 후 삽입
	// 최선의 경우 시간복잡도 n만큼 소요됨
	for (int i = 1; i < size; i++)
	{
		int temp = array[i];
		int j = i - 1;
		while (true)
		{
			if ((temp < array[j]) && (j >= 0))
			{
				array[j + 1] = array[j];
				j--;
			}
			else
			{
				break;
			}
		}

		array[j + 1] = temp;

		if (showOption == true)
		{
			std::cout << "index " << i << " : ";
			Printer::print(array, size);
		}
	}
}