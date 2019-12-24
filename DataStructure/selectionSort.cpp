//김소양
//selectionSort(선택정렬)
//	:기준 원소 자리로 뒤의 원소 중 가장 작은값을 맨 앞으로 보내는 방식.
//	T(N)=O(N^2)
#include<iostream>
using namespace std;

int main() {
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	int index, temp;

	//작은거 9개 앞으로 보내면 마지막원소는 제일 클 것이다.
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

	//test출력
	for (int i = 0; i < 10; i++) {
		cout << array[i]<<" ";
	}

	system("pause");
	return 0;
}