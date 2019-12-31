//��Ҿ�
//quickSort(������)
//	: pivot�� �������� ���� ���ҵ�� ū ���ҵ��� ������ ���
//	T(N)=O(NlogN) -> ���
//	�̹� ���ĵǾ��ִ� �־��� ��쿡�� N^2�� �ð����⵵�� ����.
#include<iostream>
using namespace std;

void quickSort(int* array, int start, int end) {
	//pivot �� ù��° ����
	if (start >= end) {
		return;
	}
	
	int i = start + 1, j = end, temp;
	while (i < j) {
		while ((array[start] > array[i])&&(i < end)) {
			i++;
		}
		while (array[start] < array[j]) {
			j--;
		}
		if (i < j) {
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	//i�� j�� �ִ� 1���� �����Ѵ�. i�� �ö���鼭 �����ϸ鼭 �ö�Ա� ������ ����      
	temp = array[start];
	array[start] = array[j];
	array[j] = temp;
	quickSort(array,start,j-1 );//pivot �� ���Ļ��±� ������ ���� �ɰ��̴�.
	quickSort(array, i, end);
}


int main() {
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	quickSort(array, 0, 9);

	//test���
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}

	system("pause");
	return 0;
}