//김소양
//quickSort(퀵정렬)
//	: pivot을 기준으로 작은 원소들과 큰 원소들을 나누는 방법
//	T(N)=O(NlogN) -> 평균
//	이미 정렬되어있는 최악의 경우에는 N^2의 시간복잡도를 가짐.
#include<iostream>
using namespace std;

void quickSort(int* array, int start, int end) {
	//pivot 은 첫번째 원소
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
	//i랑 j는 최대 1차이 나야한다. i가 올라오면서 정리하면서 올라왔기 때문에 막힘      
	temp = array[start];
	array[start] = array[j];
	array[j] = temp;
	quickSort(array,start,j-1 );//pivot 은 정렬상태기 때문에 빼도 될것이다.
	quickSort(array, i, end);
}


int main() {
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	quickSort(array, 0, 9);

	//test출력
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}

	system("pause");
	return 0;
}