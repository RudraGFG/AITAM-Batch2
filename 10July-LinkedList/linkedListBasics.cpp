#include <bits/stdc++.h>
using namespace std;

class ListNode{
  
  public:
    int val;
    ListNode* next;
    
    ListNode(int val){
        this->val = val;
        this->next = NULL;
    }
};

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
    ListNode* a = new ListNode(100);
    ListNode* b = new ListNode(200);
    ListNode* c = new ListNode(300);
    ListNode* d = new ListNode(400);
    
    a->next = b;
    b->next = c;
    c->next = d;
    
    printLL(a);

    return 0;
}
