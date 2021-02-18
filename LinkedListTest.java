
class Node{

    int data;  // data

    Node next; // stores the reference of next Node 


    Node(int data){

        this.data = data;
        this.next = null;
    }

}


class LinkedList{

    

    Node head;      // reference instance default 

    LinkedList(){

        head=null;  // to show linked list is currently;
    }


    // to insert at the end 
    public void add(int new_data){


        // create 
        Node newNode = new Node(new_data);
       
        // traversing till end node 
        Node temp = head;
        while(temp.next!=null){

            // aage chlte rho 
                temp = temp.next;   
            }
        temp.next = newNode;
    }
}


class LinkedListTest{

    public static void main(String[] args){

            LinkedList mylist = new LinkedList(); 

            // creating a new node;

            Node nodeOne = new Node(10);

            // linking 

            mylist.head = nodeOne;  

            // creating second node .

            Node nodeTwo = new Node(20);


            // adding second node 

            nodeOne.next = nodeTwo;


            // create a new node 

            Node nodeThree = new Node(30);


            // adding third node 

            nodeTwo.next = nodeThree; 


            mylist.add(40);
            mylist.add(50);

            // traverse  

            Node temp =  mylist.head; 
            while(temp!=null){

                System.out.print(temp.data+"    ");
                temp=temp.next;
            }




    }



}