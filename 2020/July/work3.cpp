/// 2 er b er soultion.using recursion
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
};
void printList(struct Node* head)
{
	struct Node* ptr = head;
	while (ptr)
	{
		printf("%d -> ", ptr->data);
		ptr = ptr->next;
	}

	printf("NULL\n");
}
void push(struct Node** head, int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}
struct Node* SortedMerge(struct Node* a, struct Node* b)
{
	if (a == NULL)
		return b;

	else if (b == NULL)
		return a;

	struct Node* result = NULL;
	if (a->data <= b->data)
	{
		result = a;
		result->next = SortedMerge(a->next, b);
	}
	else
	{
		result = b;
		result->next = SortedMerge(a, b->next);
	}

	return result;
}
void removed(struct Node*head){
    Node*freed;
    if(head==NULL)
		return;
    if(head->next!=NULL){
        if(head->data==head->next->data){
        freed=head->next;
        head->next=head->next->next;
        free(freed);
        removed(head);
        }
        else
        removed(head->next);
    }
}

int main(void)
{
	int link1[1000],n,link2[1000],m;
	cout<<"Enter The element number of first linked list"<<endl;
	scanf("%d",&n);
	cout<<"Enter first linked  list element"<<endl;
	for(int i=0;i<n;i++)
      scanf("%d",&link1[i]);
   cout<<"Enter The element number of second linked list"<<endl;
	scanf("%d",&m);
	cout<<"Enter second link list element"<<endl;
	for(int i=0;i<m;i++)
      scanf("%d",&link2[i]);

	struct Node *a = NULL, *b = NULL;
	for (int i = n-1; i >= 0; i = i - 1)
		push(&a, link1[i]);

	for (int i = m-1; i >= 0; i = i -1)
		push(&b, link2[i]);
	printf("First List : ");
	printList(a);

	printf("Second List : ");
	printList(b);

	struct Node* head = SortedMerge(a, b);
	printf("After Merge : ");
	printList(head);
	cout<<"After removing duplicate element"<<endl;
	removed(head);
	printList(head);


	return 0;
}

