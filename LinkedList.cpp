#include<iostream> 

using namespace std;

struct Node{

    int data;

    Node* next;  


    Node(int x){

        data = x;
        next = NULL;
    }


};


class LinkedList{

   public:

   Node* head;

    LinkedList(){

        head=NULL;
    }

    void addFirst(int new_data){

        //TODO: insert at the begining

    }

    int removeLast(){

        // TODO: return the last node data and also remove it.

    }

    int removeFirst(){

        //TODO: return the first node data and also remove it 
    }

    void insertAt(Node previousNode,int new_data){

        //TODO: insert the node after the given node 

    }

    
    void add(int new_data){

        
        // create 
        Node *newNode = new Node(new_data);
       
        // traversing till end node 
      
        if(head==NULL){
            
           
            head = newNode;
         
       }
       else{
             Node *temp = head;
        while(temp->next!=NULL){

            // aage chlte rho 
                temp = temp->next;   
            }
        temp->next = newNode;
   
    }

    }


};

int main(){

    // creating a head pointer;
    // Node *head = NULL; 


    // head = new Node(10); 

    // Node * nodeOne = new Node(10);


    // head->next = new Node(20);

    // Node* nodeTwo = new Node(20);
    // nodeOne->next = nodeTwo;


    // head->next->next = new Node(30);

    // Node* nodeThree = new Node(30);
    // nodeTwo->next = nodeThree;



    // head->next->next->next = new Node(40);
    // create  a new node 

    // Node *nodeOne = new Node(10);

    // //link 
    // head = nodeOne; 

    // // create a second Node 

    // Node * nodeTwo = new Node(20);

    // // adding

    // nodeOne->next = nodeTwo;


    LinkedList mylist = LinkedList();

    mylist.add(10); 
    mylist.add(20); 
    mylist.add(30); 
    mylist.add(40); 
    mylist.add(50);
    mylist.add(60);

    Node *temp =  mylist.head; 
            while(temp!=NULL){
                
                    cout << temp->data<<"  ";
                temp=temp->next;
            }






    return 0;
}