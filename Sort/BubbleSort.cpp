#include "BubbleSort.h"
#include <iostream>
#include "Printer.h"

/// <summary>
/// ��������
/// </summary>
/// <param name="array">������ �迭</param>
/// <param name="size">�迭 ������</param>
/// <param name="showOption">���İ��� ����</param>
void BubbleSort::sort(int* array, int size, bool showOption)
{
	// �ð����⵵ n^2�� ����
	// ���������� i = 0 ���� �ΰ��� ���Ͽ� ���� ���� �� ũ�� �ٲٰ�
	// ������ ���� �� ũ�� �ٲ��� ����
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