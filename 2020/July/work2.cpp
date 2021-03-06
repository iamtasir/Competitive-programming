#include<bits/stdc++.h>
using namespace std;

struct node
{
int data;
struct node* next;
};
void insert_elements(struct node** head, int new_data)
{
struct node* new_node = (struct node*) malloc(sizeof(struct node));
new_node -> data = new_data;
new_node -> next = (*head);
(*head) = new_node;
}

void display_list(struct node *node)
{
while (node!=NULL)
{
cout << node -> data << " ";
node = node -> next;
}
}

void remove_duplicate_elements(struct node* head)
{
struct node* current = head;

struct node* next_next;

if (current == NULL)
return;

while (current -> next != NULL)
{
if (current -> data == current -> next -> data)
{
next_next = current -> next -> next;
free(current -> next);
current -> next = next_next;
}
else
{
current = current -> next;
}
}
}


int main()
{
struct node* head = NULL;
int n;
cout << "Enter the total number of elements : ";
cin >> n;
cout<<endl;
cout << "Enter the sorted linked list : ";
int i;
for(i = 0; i < n; i++)
{
int data;
cin >> data;
insert_elements(&head, data);
}

cout << "\nLinked list before removing duplicates : ";
display_list(head);
cout << endl;

remove_duplicate_elements(head);

cout << "\nLinked list after removing duplicates : ";
display_list(head);
cout << endl;


return 0;
}
