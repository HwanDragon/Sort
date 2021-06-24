#include "QuickSort.h"

/// <summary>
/// ������
/// </summary>
/// <param name="array">������ �迭</param>
/// <param name="start">������ �迭 �ε��� ������</param>
/// <param name="end">������ �迭 �ε��� ����</param>
void QuickSort::sort(int* array, int start, int end)
{
	// �������� �ϳ��� �ǹ����� ���� ��
	// �ǹ��� ���� ������ ��������, ū�� ���������� ����
	// �� �۾��� ���̻� �ɰ� �� ���� ������ �ݺ��ϸ� ��������� ��� �迭�� ���ĵ�
	if (start < end)
	{
		int index = partition(array, start, end);
		sort(array, start, index - 1);	// ���ʹ� ����
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
				// ������ �迭�濡 ���� ���Ұ� �߰���
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
