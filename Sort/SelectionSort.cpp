#include "SelectionSort.h"
#include <iostream>
#include "Printer.h"

/// <summary>
/// ��������
/// </summary>
/// <param name="array">������ �迭</param>
/// <param name="size">������ �迭 ������</param>
/// <param name="showOption">���İ��� ����</param>
void SelectionSort::sort(int* array, int size, bool showOption)
{
	// ���������� i = 0 ���� n ���� �� ���� ū���� �����Ͽ� ���� ���������� ������, 
	// ���� �ϳ� ���ҽ�Ų ��, i = 0 ���� n - 1���� ����... �׸��� ���� ������ �ݺ���
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

		// ���İ��� ����
		if (showOption == true)
		{
			std::cout << "index " << i << " : ";
			Printer::print(array, size);
		}
	}
}