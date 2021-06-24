#pragma once
class QuickSort
{
public:
	/// <summary>
	/// 퀵정렬
	/// </summary>
	/// <param name="array">정렬할 배열</param>
	/// <param name="start">정렬할 배열 인덱스 시작점</param>
	/// <param name="end">정렬할 배열 인덱스 종점</param>
	static void sort(int* array, int start, int end);
	static int partition(int* array, int start, int end);
};