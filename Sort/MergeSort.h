#pragma once
class MergeSort
{
private:
	static void sort(int* array, int* temp, int start, int end);
	static void merge(int* array, int* temp, int start, int mid, int end);
public:
	/// <summary>
	/// ��������
	/// </summary>
	/// <param name="array">������ �迭</param>
	/// <param name="size">�迭 ������</param>
	static void sort(int* array, int size);
};