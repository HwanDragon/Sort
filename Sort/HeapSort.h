#pragma once
class HeapSort
{
public:

	/// <summary>
	/// ������
	/// </summary>
	/// <param name="array">������ �迭</param>
	/// <param name="size">�迭 ������</param>
	static void sort(int* array, int size);

	/// <summary>
	/// ������ ���� �˰���
	/// </summary>
	/// <param name="array">�� ������ ���� �迭</param>
	/// <param name="size">�迭 ������</param>
	static void heapify(int* array, int size);
};