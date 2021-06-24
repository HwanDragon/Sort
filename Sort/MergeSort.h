#pragma once
class MergeSort
{
private:
	static void sort(int* array, int* temp, int start, int end);
	static void merge(int* array, int* temp, int start, int mid, int end);
public:
	/// <summary>
	/// 병합정렬
	/// </summary>
	/// <param name="array">정렬할 배열</param>
	/// <param name="size">배열 사이즈</param>
	static void sort(int* array, int size);
};