//김소양
//insertionSort(삽입정렬)
//	: 기준 원소를 앞의 정렬된 원소들 중 순서에 맞는 장소에 끼워 넣는 방식
//	T(N) = O(N^2)
//	거의 정렬되어있으면 성능이 아주 좋다.
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

	//test 출력
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}

	system("pause");
	return 0;
}