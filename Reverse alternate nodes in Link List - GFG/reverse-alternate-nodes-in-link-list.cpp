//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
 
 private:
    
    struct Node * reverse(struct Node *even_head){
        if(even_head==NULL || even_head->next==NULL)
        return even_head;
        struct Node* prev=NULL;
        struct Node *curr=even_head;
        struct Node *curr_nxt=NULL;
        
        while(curr!=NULL){
            curr_nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=curr_nxt;
        }
       return  prev;
        
        
    }
    
       public:
      void rearrange(struct Node *odd)
{
    if (odd == NULL)
        return;

    struct Node *even = odd->next;

    if (even == NULL)
        return;

    //struct Node *odd_head = odd;
    struct Node *even_head = even;

    while (even != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next =reverse(even_head);


        
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends