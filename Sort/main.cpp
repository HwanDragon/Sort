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
	bool showOption = true;	// ���� ���� ����

	BubbleSort::sort(array, size, showOption);	// ��������
	//SelectionSort::sort(array, size, showOption);	// ��������
	//InsertionSort::sort(array, size, showOption);	// ��������
	//MergeSort::sort(array, size);	// ��������
	//QuickSort::sort(array, start, end);	// ������
	//HeapSort::sort(array, size);	// ������
	

	cout << "\n - main - \n";
	Printer::print(array, size);

	return 0;
}

