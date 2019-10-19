#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*first = NULL;

void create(int A[] , int size)
{
    struct node *temp,*last;
    first = new struct node;
    first -> data = A[0];
    first -> next = NULL;
    last = first;


    for(int i = 1 ; i < size ; i++)
    {
        temp = new struct node;
        temp -> data = A[i];
        temp -> next = NULL;
        last -> next = temp;
        last = temp;
    }
}

void display(struct node *p)
{
    cout<<" <----------------Linked List------------------->"<<endl;
    while(p!= NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}


int main()
{
    int A[] = {3,5,7,10,15};
    create(A,5);
    display(first);
    return 0;
}