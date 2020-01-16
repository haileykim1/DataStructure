//��Ҿ�
//��������(mergeSort)
//	: diveide & conquer �� �̿��Ͽ� ���ĵ� ���� ��ġ�� ����.
//	T(N) = O(NlogN) -> �־��� ��쿡�� ����.
//	but �߰����� �޸� ���� �ʿ�.
#include<iostream>
using namespace std;

int init[8] = { 3, 8, 5, 1, 2, 6, 4, 7 };
int sorted[8] = { 3, 8, 5, 1, 2, 6, 4, 7 };


void mergeSort(int start, int end) {
	if (start == end)
		return;

	int middle = (start + end) / 2;
	mergeSort(start, middle);
	mergeSort(middle + 1, end);

	int i = start, j = middle + 1, index = start;
	while (index <= end) {
		if (i > middle) {
			for (; j <= end; j++) {
				sorted[index] = init[j];
				index++;
			}
		}
		else if (j > end) {
			for (; i <= middle; i++) {
				sorted[index] = init[i];
				index++;
			}
		}else if (init[i] > init[j]) {
			sorted[index] = init[j];
			j++;
			index++;
		}
		else if (init[i] <= init[j]) {
			sorted[index] = init[i];
			i++;
			index++;
		}
	}
	for (int k = start; k <= end; k++) {
		init[k] = sorted[k];
	}
}

int main() {
	mergeSort(0, 7);

	//test ���
	for (int i = 0; i < 8; i++) {
		cout << sorted[i] << " ";
	}

	system("pause");
}