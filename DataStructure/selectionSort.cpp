//��Ҿ�
//selectionSort(��������)
//	:���� ���� �ڸ��� ���� ���� �� ���� �������� �� ������ ������ ���.
//	T(N)=O(N^2)
#include<iostream>
using namespace std;

int main() {
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	int index, temp;

	//������ 9�� ������ ������ ���������Ҵ� ���� Ŭ ���̴�.
	for (int i = 0; i < 9; i++) {
		index = i;
		for (int j = i + 1; j < 10; j++) {
			if (array[j]<array[index]) {
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	//test���
	for (int i = 0; i < 10; i++) {
		cout << array[i]<<" ";
	}

	system("pause");
	return 0;
}