#pragma once
class QuickSort
{
public:
	/// <summary>
	/// ������
	/// </summary>
	/// <param name="array">������ �迭</param>
	/// <param name="start">������ �迭 �ε��� ������</param>
	/// <param name="end">������ �迭 �ε��� ����</param>
	static void sort(int* array, int start, int end);
	static int partition(int* array, int start, int end);
};