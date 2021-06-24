#pragma once
class HeapSort
{
public:

	/// <summary>
	/// 힙정렬
	/// </summary>
	/// <param name="array">정렬할 배열</param>
	/// <param name="size">배열 사이즈</param>
	static void sort(int* array, int size);

	/// <summary>
	/// 힙구조 생성 알고리즘
	/// </summary>
	/// <param name="array">힙 구조를 만들 배열</param>
	/// <param name="size">배열 사이즈</param>
	static void heapify(int* array, int size);
};