#include <iostream>
#include <vector>
using namespace std;
// Khởi tạo Node // node là 1 phần tử
// hai cái này buộc phải có
struct Node
{
    int data;
    Node*next;
};
Node* makeNode(int x){
    Node* tmp = new Node; // tạo node tmp là 1 struct.
    tmp -> data = x; // cấp phát động
    tmp -> next = NULL; 
    return tmp;
}
bool empty (Node* a){
    return a == NULL;
}

int Size (Node* a){  // số lượng phần tử trong dslk
    int cnt = 0;
    while (a != NULL)
    {
        ++cnt;
        a = a->next;  // QUAN TRỌNG NHẤT CỦA DSLK
    }
    return cnt;
}

// 4 cái cơ bản cần khai báo trong dslk
//--------------------------------------------//

//thêm vào đầu dslk
void insertFirst(Node* &a, int x){
    Node* tmp = makeNode(x);
    if (a == NULL){
        a = tmp;
    }
    else {
        tmp -> next = a;
        a = tmp;
    }
}

//Them 1 phan tu vao cuoi dslk
void insertLast(Node* &a, int x){
	Node* tmp = makeNode(x);
	if(a == NULL){
		a = tmp;
	}
	else{
		Node* p = a;
		while(p->next != NULL){
			p = p->next;
		}
		p->next = tmp;
	}
}

//in 
void print(Node* a){
    while (a != NULL)
    {
        cout << a->data << " ";
        a = a-> next;
    }
    
}
int main(int argc, char const *argv[])
{
    Node* head = NULL;
    int n; cin >> n;
    insertFirst(head, n); // thêm vào đầu dslk
    print(head);
    return 0;
}






