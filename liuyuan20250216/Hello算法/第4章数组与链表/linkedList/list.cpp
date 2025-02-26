#include <iostream>
#include<cstdlib>

using namespace std;

/* 链表节点结构体 */
typedef struct listNode
{
    int val;                                    // 节点值
    listNode *next;                             // 指向下一节点的指针
    listNode(int x) : val(x), next(nullptr) {}  // 构造函数
}list;


list* listCreate(int n)
{
	list *head,*p1,*end;
    head = new listNode(0);
	end = head;
	for(int i = 0; i < n; i++) {
        p1 = new listNode(0);
		p1->val = i;
		end->next = p1;
		end = p1;
	}
	end->next = NULL; //链表的尾部next指向空
	return head;
}

/* 在链表的节点 n0 之后插入节点 P */
void insertNode(list *n0, list *p)
{
    listNode *n1 = n0->next; // n0节点下一个节点指向n1
    p->next = n1;            // 让P指向n1
    n0->next = p;            // 让n0指向p
}

/* 删除链表的节点 n0 之后的首个节点 */
void removeNode(list *n0)
{
    if (n0 == nullptr) {
        cout << "n0 is NULL!!!" << endl;
        return;
    }
    list *p = n0->next;
    list *n1 = p->next;
    n0->next = n1;
    delete p;
}

/* 删除指定节点 */
void listDelete(list *head, int n)
{
	list *p = head, *p1 = head;
	for(int i = 0; i < n && p != nullptr; i++) {
		p1 = p;
		p = p->next;
	}
	if(p != NULL) {
		p1->next = p->next;
		delete p;
	}
	else {
        cout<<"找不到节点/(ㄒoㄒ)/~~"<<endl;
    }
}

/* 在链表中查找值为 target 的首个节点 */
int find(listNode *head, int target)
{
    int index = 0;
    while (head != nullptr) {
        if (head->val == target) {
            cout << "find node val is  " << index << endl;
            return index;
        }

        head = head->next;
        index++;
    }
    return 0;
}

/* 遍历链表 */
void printList(list *head){
	list *temp;
	temp = head->next;
	while(temp != nullptr){
		cout << temp->val << ' ';
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
    int nodeNum = 6;
    list *head = new listNode(0);
	head = listCreate(6);
    printList(head);
    cout << "************************" << endl;

    list*n6 = new list(nodeNum);
    insertNode(head->next->next, n6);
    printList(head);
    cout << "++++++++++++++++++++++++" << endl;

    //removeNode(head->next->next);
    listDelete(head, nodeNum);
    printList(head);
    cout << "------------------------" << endl;
    find(head, head->next->next->val);

    return 0;
}
