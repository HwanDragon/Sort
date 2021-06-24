#include "QuickSort.h"

/// <summary>
/// 퀵정렬
/// </summary>
/// <param name="array">정렬할 배열</param>
/// <param name="start">정렬할 배열 인덱스 시작점</param>
/// <param name="end">정렬할 배열 인덱스 종점</param>
void QuickSort::sort(int* array, int start, int end)
{
	// 퀵정렬은 하나의 피벗값을 정한 뒤
	// 피벗값 보다 작은건 왼쪽으로, 큰건 오른쪽으로 보냄
	// 이 작업을 더이상 쪼갤 수 없을 때까지 반복하면 결과적으로 모든 배열이 정렬됨
	if (start < end)
	{
		int index = partition(array, start, end);
		sort(array, start, index - 1);	// 왼쪽방 정렬
		sort(array, index + 1, end);
	}
}

int QuickSort::partition(int* array, int start, int end)
{
	int value = array[end];
	int lIndex = start;
	int rIndex = start;
	int index = start;

	while (true)
	{
		if (index == end)
			break;

		int temp = array[index];
		if (temp < value)
		{

			if (lIndex != rIndex)
			{
				// 오른쪽 배열방에 작은 원소가 추가됨
				// swap
				int t = array[lIndex];
				array[lIndex] = array[rIndex];
				array[rIndex] = t;
			}
			lIndex++;
			rIndex++;
		}
		else if (temp > value)
		{
			rIndex++;
		}
		index++;
	}

	// swap
	array[end] = array[lIndex];
	array[lIndex] = value;

	return lIndex;
}
