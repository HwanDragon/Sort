#include "MergeSort.h"
/*
	- MersgSort는 합병정렬 또는 병합정렬이라고 하며 분할 정복 알고리즘임
	- 시간복잡도 n * Log(n)에 해당함
	- 공간복잡도 n 만큼 필요
	- 큰 문제를 작은 문제 단위로 쪼개면서 해결해나가는 방식
*/

void MergeSort::sort(int* array, int size)
{
	int* temp = new int[size];
	sort(array, temp, 0, size - 1);	// n 개를 모두 정렬
}

void MergeSort::sort(int* array, int* temp, int start, int end)
{
	if (start < end)
	{
		int mid = (start + end) / 2;
		sort(array, temp, start, mid);	// 문제를 절반으로 쪼갬
		sort(array, temp, mid + 1, end);	// 문제를 절반으로 쪼갬
		merge(array, temp, start, mid, end);	// 쪼갠 문제들 병합
	}
}

void MergeSort::merge(int* array, int* temp, int start, int mid, int end)
{
	for (int i = start; i <= end; i++)
		temp[i] = array[i];

	int lIndex = start;
	int rIndex = mid + 1;
	int tempIndex = start;

	// 두개 인덱스(lIndex, rIndex)를 이용하여 start, mid +1 부터 값을 비교하면서 정렬함
	while ((lIndex <= mid) && (rIndex <= end))
	{
		if (temp[lIndex] <= temp[rIndex])
		{
			array[tempIndex] = temp[lIndex];
			lIndex++;
		}
		else
		{
			array[tempIndex] = temp[rIndex];
			rIndex++;
		}
		tempIndex++;
	}

	// 우측방에 값이 남아있을 경우
	for (int i = 0; i <= end - rIndex; i++)
		array[i + tempIndex] = temp[i + rIndex];

	// 좌측방에 값이 남아있을경우
	for (int i = 0; i <= mid - lIndex; i++)
		array[i + tempIndex] = temp[i + lIndex];
}