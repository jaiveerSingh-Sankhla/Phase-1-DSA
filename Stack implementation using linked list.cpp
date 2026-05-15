#include <iostream>
using namespace std;
class Node
{
	public:
		int value;
		Node *next;
		Node(int v)
		{
			value = v;
			next = NULL;
		}
};

class Stack
{
    Node *head;
    public:
    Stack()
    {
        head=NULL;
    }
    void push (int v)
    {
        if (head==NULL)
        {
        Node * n=new Node(v);
        head=n;
        }
        else 
        { 
            Node *n=new Node(v);
            n->next=head;
            head=n;
        }
     }
    void pop()
    {
        Node*n=head->next;
        delete head;
        head=n;
    }
    bool empty()
    {
        if(head==NULL)
        {
        return true;
        }
        else
        {
            return false;
        }
        
    }
    int top()
        {
            return head->value;
        }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    
    while (!st.empty())
    {
        cout<< st.top()<<" ";
        st.pop();
    }
}

    
 
