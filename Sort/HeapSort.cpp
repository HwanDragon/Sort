#include "HeapSort.h"
#include "Printer.h"

/// <summary>
/// 힙정렬
/// </summary>
/// <param name="array">정렬할 배열</param>
/// <param name="size">배열 사이즈</param>
void HeapSort::sort(int* array, int size)
{
	/*
		힙정렬은 힙구조를 만든 뒤,
		힙구조의 특성을 이용해 정렬을 수행한다.
		맥스힙의 경우 최상위 노드가 항상 큰 값을 가지므로, 최상위 노드를 마지막 노드와 값을 바꾸고,
		인덱스를 하나 감소시켜 다시 힙 생성 알고리즘을 n - 1 까지 수행한다.
		힙 생성 알고리즘을 수행하면 다시 첫번째 노드가 가장 큰 값을 가지므로 n - 2번째 노드와 값을 바꾼다.
		이를 반복하여 정렬을 수행 (시간복잡도 n * log(n))

	*/

	heapify(array, size);	// 힙구조 생성 알고리즘

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
/// 힙구조 생성 알고리즘
/// </summary>
/// <param name="array">힙 구조를 만들 배열</param>
/// <param name="size">배열 사이즈</param>
void HeapSort::heapify(int* array, int size)
{
	// 힙은 완전 이진트리를 기반으로 하기때문에 배열으로 구현이 용이하다.
	// 맥스힙(max heap)은 항상 부모노드가 자식노드보다 큰 값을 가지는 경우이고,
	// 민힙(min heap)은 항상 부모노드가 자식노드보다 작은값을 가지는 경우이다.
	// 맥스힙을 만들 때 부모노드와 자식노드를 비교하여 부모가 더 작으면 값을 바꾸고
	// 그 부모노드의 부모와 다시 비교를 하는 작업을 반복한다.

	for (int i = 0; i < size; i++)
	{
		int child = i;	// 자식노드
		int root = (i - 1) / 2; 	// 부모노드
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