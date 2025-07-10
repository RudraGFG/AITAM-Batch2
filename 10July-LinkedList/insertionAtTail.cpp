#include<bits/stdc++.h>
using namespace std;

class ListNode{

public:

	int val;
	ListNode* next;

	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}

};

void insertAtHead(ListNode*& head, int val) {
    // passing address of the head-node by reference

	ListNode* nn = new ListNode(val);
	nn->next = head;
	head = nn;
}

ListNode* getTail(ListNode* head) {

    ListNode* i = head;
    
    while(i->next != NULL){
        i=i->next;
    }
    
    return i;

}

void insertAtTail(ListNode*& head, int val) {

	if (head == NULL) {
		insertAtHead(head, val);
		return;
	}

	ListNode* nn = new ListNode(val);
	ListNode* tail = getTail(head);
	tail->next = nn;
}


void printLL(ListNode* head){
    ListNode* i = head;
    int cnt = 0;
    
    while(i != NULL){
        cout << i->val << "->";
        i = i->next;
        
        cnt++;
    }
    
    cout << endl;
    cout << cnt;
}

int main() {

	ListNode* head = NULL; //empty linked list

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	
	insertAtTail(head, 1000);
	insertAtTail(head, 2000);


	printLL(head);

	return 0;
}
