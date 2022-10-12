#ifndef LLREC_CPP
#define LLREC_CPP
#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

//function to move to put the Node in head into the appropriate linked list
//use reference of pointer to directly access linked lists

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot)
{

  if(head==nullptr) //if head no longer exists
  {
    larger=nullptr;
    smaller=nullptr;
    return;
    //base case
  }
  else if(head->val <= pivot) //put in "smaller" linked list
  {
    smaller=head;
    llpivot(head->next, smaller->next, larger, pivot);
  }
  else if(head->val > pivot) //put in "larger" linked list
  {
    larger=head;
    llpivot(head->next, smaller, larger->next, pivot);
  }
}

#endif