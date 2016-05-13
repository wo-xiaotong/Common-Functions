#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/**
use int as sort demo
rewrite by template
*/

void printArr(int A[], int size) {
	for (int i = 0; i < size; ++i){
		if(i>0 && i%10==0)cout<<endl;
		cout<<A[i]<<" ";
	}
	cout<<endl;
}

void exchangeAB(int *a, int *b) {
	int temp = a;
	a = b;
	b = temp;
}

void SelectSort(int A[], int size) {
	int min;
	for (int i = 0; i < size; ++i) {
		min = i;  
		for (int j = i; j < size; ++j)
		if (A[j]<A[min])min = j;
		if (min != i)
			exchangeAB(A[i], A[min]);
	}
}

void BubbleSort(int A[], int size) {
	bool flag = true;
	for (int i = 0; i < size - 1 && flag; ++i) {
		flag = false;
		for (int j = 0; j < size - i - 1; ++j)
		if (A[j]>A[j + 1]) {
			exchangeAB(A[j], A[j + 1]);
			flag = true;
		}
	}
}


void CockSort(int A[], int size) {
	int low = 0;
	int up = size - 1;
	int index = 0;

	while (low<up) {
		for (int i = low; i < up; ++i)
		if (A[i]>A[i + 1]) {
			exchangeAB(A[i], A[i + 1]);
			index = i;
		}
		up = index;
		for (int i = up; i > low; --i)
		if (A[i]<A[i - 1]) {
			exchangeAB(A[i], A[i - 1]);
			index = i;
		}
		low = index;
	}
}

void InsertSort(int A[], int size) {
	if (size<2)
		return;
	int temp;
	int j;
	for (int i = 0; i < size; ++i) {
		temp = A[i];
		for (j = i; j > 0 && temp<A[j - 1]; --j)
			A[j] = A[j - 1]; 

		A[j] = temp;

	}
}

void BinaryInsertSort(int A[], int size) {
	int low, high, m, temp, j;
	for (int i = 0; i < size; ++i) {
		temp = A[i];
		low = 0;
		high = i - 1;
		while (low <= high) {
			m = (high + low) / 2;
			if (temp <= A[m])
				high = m - 1;
			else
				low = m + 1;
		}

		for (j = i; j > high + 1; --j)
			A[j] = A[j - 1];  
		A[j] = temp;
	}
}


void ShellSort(int A[], int size) {
	for (int gap = size / 2; gap>0; gap = gap == 2 ? 1 : (int)(gap / 2.2))  
	{
		for (int i = gap; i<size; i++)  
		{
			int  temp = A[i];
			int j;
			for (j = i; j >= gap&&temp<A[j - 1]; j -= gap) {
				A[j] = A[j - gap];
			}
			A[j] = temp;
		}
	}
}



int partition(int A[], int low, int high) {
	int pivot = A[high];
	int i = low - 1, j = high;
	while (i<j) {
		while (A[++i]<pivot &&i<high);
		while (A[--j]>pivot &&j>low);
		if (i<j) {
			exchangeAB(A[i], A[j]);   
		}
	}
	exchangeAB(A[i], A[high]); 
	return i;
}

void QuickSort(int A[], int low, int high) {
	if (low<high) {
		int mid = partition(A, low, high);
		QuickSort(A, low, mid - 1);       
		QuickSort(A, mid + 1, high);
	}
}


void QuickSort2(int A[], int low, int high) {
	if (low<high) {
		int pivot = A[high];
		int i = low - 1, j = high;
		while (i<j) {
			while (A[++i]<pivot &&i<high) {}; 
			while (A[--j]>pivot &&j>low) {}; 
			if (i<j) {
				exchangeAB(A[i], A[j]);   
			}
		}
		exchangeAB(A[i], A[high]); 

		QuickSort2(A, low, i - 1); 
		QuickSort2(A, i + 1, high);
	}
}


int main()
{
	int A[100];
	srand(time(NULL));

	int cnt=100;
	while(cnt--)A[cnt]=rand()%1000;
	
	BinaryInsertSort(A,100);
	printArr(A,100);
	return 0;
}
