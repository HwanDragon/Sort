#include "InsertionSort.h"
#include "Printer.h"

/// <summary>
/// ��������
/// </summary>
/// <param name="array">������ �迭</param>
/// <param name="size">�迭 ������</param>
/// <param name="showOption">���İ��� ����</param>
void InsertionSort::sort(int* array, int size, bool showOption)
{
	// ���Ҹ� index = 1���� ������ ����
	// index�� �ϳ� �����Ǹ�
	// ���� ���ҵ�� ���Ͽ� ������ ��ġ�� Ȯ���� �� ����
	// �ּ��� ��� �ð����⵵ n��ŭ �ҿ��
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