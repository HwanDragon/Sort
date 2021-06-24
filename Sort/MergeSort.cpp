#include "MergeSort.h"
/*
	- MersgSort�� �պ����� �Ǵ� ���������̶�� �ϸ� ���� ���� �˰�����
	- �ð����⵵ n * Log(n)�� �ش���
	- �������⵵ n ��ŭ �ʿ�
	- ū ������ ���� ���� ������ �ɰ��鼭 �ذ��س����� ���
*/

void MergeSort::sort(int* array, int size)
{
	int* temp = new int[size];
	sort(array, temp, 0, size - 1);	// n ���� ��� ����
}

void MergeSort::sort(int* array, int* temp, int start, int end)
{
	if (start < end)
	{
		int mid = (start + end) / 2;
		sort(array, temp, start, mid);	// ������ �������� �ɰ�
		sort(array, temp, mid + 1, end);	// ������ �������� �ɰ�
		merge(array, temp, start, mid, end);	// �ɰ� ������ ����
	}
}

void MergeSort::merge(int* array, int* temp, int start, int mid, int end)
{
	for (int i = start; i <= end; i++)
		temp[i] = array[i];

	int lIndex = start;
	int rIndex = mid + 1;
	int tempIndex = start;

	// �ΰ� �ε���(lIndex, rIndex)�� �̿��Ͽ� start, mid +1 ���� ���� ���ϸ鼭 ������
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

	// �����濡 ���� �������� ���
	for (int i = 0; i <= end - rIndex; i++)
		array[i + tempIndex] = temp[i + rIndex];

	// �����濡 ���� �����������
	for (int i = 0; i <= mid - lIndex; i++)
		array[i + tempIndex] = temp[i + lIndex];
}