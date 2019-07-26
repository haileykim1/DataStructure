#include<iostream>
using namespace std;

class Node {
public:
	Node();
	Node(const int& key);
	int key;
	Node* next;
	//노드생성자들만들기
};

class LinkedList {
public:
	Node* head;
	Node* tail;

	LinkedList();
	void IndexAdd();
	void StackQueueAdd();
	void Delete();
	void Sort();
	void Search();
	void Print();
};

int main() {
	LinkedList* Mylist=new LinkedList();
	while (1) {
		int choice;
		cout << "1.인덱스추가 2.스택큐추가 3.인덱스삭제 4.오름차순정렬 5.검색 6.출력 7.종료" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			Mylist->IndexAdd();
			continue;
		case 2:
			Mylist->StackQueueAdd();
			continue;
		case 3:
			Mylist->Delete();
			continue;
		case 4:
			Mylist->Sort();
			continue;
		case 5:
			Mylist->Search();
			continue;
		case 6:
			Mylist->Print();
			continue;
		case 7:
			break;
		}


	}

	return 0;
}

LinkedList::LinkedList()
	:head(new Node()),tail(new Node())
{
	head->next = tail;
	tail->next = head;
}

void LinkedList::IndexAdd()
{
	cout << "추가할 숫자번호 입력" << endl;
	int index;
	cin >> index;
	int key;
	cout << "추가할 키 값 입력" << endl;
	cin >> key;
	Node* AddNode = new Node(key);
	Node* NowNode= head;
	for (int i = 0; i < index-1; i++) {
		NowNode = NowNode->next;
	}
	AddNode->next = NowNode->next;
	NowNode->next = AddNode;
	cout << "|추가완료|" << endl;
}

void LinkedList::StackQueueAdd()
{
	int key;
	cout << "추가할 키 값 입력" << endl;
	cin >> key;
	Node* AddNode = new Node(key);
	Node* NowNode = head;
	while (NowNode->next != tail) {
		NowNode = NowNode->next;
	}
	AddNode->next = tail;
	NowNode->next = AddNode;
	cout << "|추가완료|" << endl;
}

void LinkedList::Delete()
{
	cout << "삭제할 숫자번호 입력" << endl;
	int index;
	cin >> index;
	Node* NowNode;
	NowNode = head;
	for (int i = 0; i < index-1; i++) {
		NowNode = NowNode->next;
	}
	Node* DelNode = NowNode->next;
	NowNode->next = DelNode->next;
	delete DelNode;
	cout << "|삭제완료|" << endl;
}


void LinkedList::Sort()
{
	cout << "미구현" << endl;
}

void LinkedList::Search()
{
	cout << "검색 키 값 입력" << endl;
	int key;
	cin >> key;
	Node* NowNode;
	NowNode = head;
	while (NowNode->next != tail) {
		NowNode = NowNode->next;
		if (NowNode->key == key) {
			cout << "|키값존재|" << endl;
			break;
		}
		else if (NowNode->next == tail) {
			cout << "|키값부재|" << endl;
		}
	}
	
}

void LinkedList::Print()
{
	Node* NowNode;
	NowNode = head;
	while (NowNode->next != tail) {
		cout << NowNode->key << "->";
		NowNode = NowNode->next;
	}
	cout << NowNode->key <<"|출력완료|"<<endl;

}

Node::Node()
	:key(0),next(NULL)
{
}

Node::Node(const int & key)
	:key(key),next(NULL)
{
}
