#include "HeapSort.h"
#include "Printer.h"

/// <summary>
/// ������
/// </summary>
/// <param name="array">������ �迭</param>
/// <param name="size">�迭 ������</param>
void HeapSort::sort(int* array, int size)
{
	/*
		�������� �������� ���� ��,
		�������� Ư���� �̿��� ������ �����Ѵ�.
		�ƽ����� ��� �ֻ��� ��尡 �׻� ū ���� �����Ƿ�, �ֻ��� ��带 ������ ���� ���� �ٲٰ�,
		�ε����� �ϳ� ���ҽ��� �ٽ� �� ���� �˰����� n - 1 ���� �����Ѵ�.
		�� ���� �˰����� �����ϸ� �ٽ� ù��° ��尡 ���� ū ���� �����Ƿ� n - 2��° ���� ���� �ٲ۴�.
		�̸� �ݺ��Ͽ� ������ ���� (�ð����⵵ n * log(n))

	*/

	heapify(array, size);	// ������ ���� �˰���

	for (int i = size - 1; i >= 0; i--)
	{
		int temp = array[0];
		array[0] = array[i];
		array[i] = temp;

		int root = 0;
		int child = root * 2 + 1;
		while (child < (i - 1))
		{
			if (array[child] < array[child + 1])
				child++;

			if (array[root] < array[child])
			{
				int t = array[root];
				array[root] = array[child];
				array[child] = t;
			}

			root = child;
			child = root * 2 + 1;
		}
	}
}

/// <summary>
/// ������ ���� �˰���
/// </summary>
/// <param name="array">�� ������ ���� �迭</param>
/// <param name="size">�迭 ������</param>
void HeapSort::heapify(int* array, int size)
{
	// ���� ���� ����Ʈ���� ������� �ϱ⶧���� �迭���� ������ �����ϴ�.
	// �ƽ���(max heap)�� �׻� �θ��尡 �ڽĳ�庸�� ū ���� ������ ����̰�,
	// ����(min heap)�� �׻� �θ��尡 �ڽĳ�庸�� �������� ������ ����̴�.
	// �ƽ����� ���� �� �θ���� �ڽĳ�带 ���Ͽ� �θ� �� ������ ���� �ٲٰ�
	// �� �θ����� �θ�� �ٽ� �񱳸� �ϴ� �۾��� �ݺ��Ѵ�.

	for (int i = 0; i < size; i++)
	{
		int child = i;	// �ڽĳ��
		int root = (i - 1) / 2; 	// �θ���
		while (child != 0)
		{
			if (array[root] < array[child])
			{
				int temp = array[root];
				array[root] = array[child];
				array[child] = temp;
			}

			child = root;
			root = (root - 1) / 2;
		}
	}
}