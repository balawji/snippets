struct node* reverse_linked_list(node *head)
{
struct node *prev = NULL, *curr = NULL, *temp = NULL;

if(head & head->next != NULL)
  {
    prev = head;
    curr = head->next;
    head->next = NULL;
    while(curr)
      {
        temp = curr;
        curr = curr->next;
        temp->next = prev;
        prev = temp;
      }
    return(prev);
  }
return(head);  
}
