//��Ҿ�
//insertionSort(��������)
//	: ���� ���Ҹ� ���� ���ĵ� ���ҵ� �� ������ �´� ��ҿ� ���� �ִ� ���
//	T(N) = O(N^2)
//	���� ���ĵǾ������� ������ ���� ����.
#include<iostream>
using namespace std;

int main() {
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	int temp;

	for (int i = 1; i < 10; i++) {
		for (int j = i; j > 0; j--) {
			if (array[j] < array[j - 1]) {
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
			}
			else {
				break;
			}
		}
	}

	//test ���
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}

	system("pause");
	return 0;
}