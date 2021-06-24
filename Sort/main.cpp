#include <iostream>
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"
#include "Printer.h"

using namespace std;


int main()
{
	int array[] = { 6, 5, 1, 9, 0, 3, 4, 7, 2, 8 };
	int size = 10;
	int start = 0;
	int end = 9;
	bool showOption = true;	// 정렬 과정 보기

	BubbleSort::sort(array, size, showOption);	// 버블정렬
	//SelectionSort::sort(array, size, showOption);	// 선택정렬
	//InsertionSort::sort(array, size, showOption);	// 삽입정렬
	//MergeSort::sort(array, size);	// 병합정렬
	//QuickSort::sort(array, start, end);	// 퀵정렬
	//HeapSort::sort(array, size);	// 힙정렬
	

	cout << "\n - main - \n";
	Printer::print(array, size);

	return 0;
}

