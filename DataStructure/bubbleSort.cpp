//김소양
//bubbleSort(버블정렬)
//	:이웃한 원소와 비교하여 자리 swap하는 방식
//	T(N) = O(N^2)
#include<iostream>
using namespace std;

int main() {
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	int temp;

	//큰것 9개 뒤로 보내면 맨 앞은 제일 작은 수일 것이다.
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	//test 출력
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}

	system("pause");
	return 0;
}