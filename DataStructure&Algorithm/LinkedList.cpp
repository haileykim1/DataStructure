#include<iostream>
using namespace std;

class Node {
public:
	Node();
	Node(const int& key);
	int key;
	Node* next;
	//�������ڵ鸸���
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
		cout << "1.�ε����߰� 2.����ť�߰� 3.�ε������� 4.������������ 5.�˻� 6.��� 7.����" << endl;
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
	cout << "�߰��� ���ڹ�ȣ �Է�" << endl;
	int index;
	cin >> index;
	int key;
	cout << "�߰��� Ű �� �Է�" << endl;
	cin >> key;
	Node* AddNode = new Node(key);
	Node* NowNode= head;
	for (int i = 0; i < index-1; i++) {
		NowNode = NowNode->next;
	}
	AddNode->next = NowNode->next;
	NowNode->next = AddNode;
	cout << "|�߰��Ϸ�|" << endl;
}

void LinkedList::StackQueueAdd()
{
	int key;
	cout << "�߰��� Ű �� �Է�" << endl;
	cin >> key;
	Node* AddNode = new Node(key);
	Node* NowNode = head;
	while (NowNode->next != tail) {
		NowNode = NowNode->next;
	}
	AddNode->next = tail;
	NowNode->next = AddNode;
	cout << "|�߰��Ϸ�|" << endl;
}

void LinkedList::Delete()
{
	cout << "������ ���ڹ�ȣ �Է�" << endl;
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
	cout << "|�����Ϸ�|" << endl;
}


void LinkedList::Sort()
{
	cout << "�̱���" << endl;
}

void LinkedList::Search()
{
	cout << "�˻� Ű �� �Է�" << endl;
	int key;
	cin >> key;
	Node* NowNode;
	NowNode = head;
	while (NowNode->next != tail) {
		NowNode = NowNode->next;
		if (NowNode->key == key) {
			cout << "|Ű������|" << endl;
			break;
		}
		else if (NowNode->next == tail) {
			cout << "|Ű������|" << endl;
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
	cout << NowNode->key <<"|��¿Ϸ�|"<<endl;

}

Node::Node()
	:key(0),next(NULL)
{
}

Node::Node(const int & key)
	:key(key),next(NULL)
{
}
