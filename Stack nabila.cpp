#include <iostream>

using namespace std;

class node
{
    public:
        char data;
        node *next;

        node(char x)
        {
            data = x;
            next = NULL;
        }
};

class Stack
{
    public:
        node *top;

        Stack()
        {
            top = NULL;
        }

        void push(node *n)
        {
            n->next = top;
            top = n;
        }

        void pop()
        {
            // Implement here
            node *p = top;
            top = top->next;
            p->next = NULL;
        }

        void print()
        {
            node* ptr = top;
            cout << "top->";
            
            while (ptr != NULL)
            {
                cout << ptr->data << "->";
                ptr = ptr->next;
            }
        }

        int getSize()
        {
            int size = 0;

            // Implement here
			node *p = top;
			
			while(p != NULL){
				size++;
				p = p->next;
			}
            return size;
        }
};

int main()
{
    // Implement here
	Stack S;
	
	node *n1 = new node('a');
	S.push(n1);
	node *n2 = new node('b');
	S.push(n2);
	node *n3 = new node('c');
	S.push(n3);
	node *n4 = new node('d');
	S.push(n4);
	
	cout << S.getSize();
	cout << endl;
	
	S.print();
	S.pop();
	//cout << endl;
	
	//S.print();	
	
    return 0;
}
