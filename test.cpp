#include <iostream>

using namespace std;

class Node{

public:
    int data;
    Node *next;

    Node(){
        data = 0;
        next=NULL;
    }

    Node(int data){
        this->data = data;
        this->next=NULL;
    }
};

class SingleLinkedSeatingList{

public:
    Node *head;
    SingleLinkedSeatingList(){
        head=NULL;
    }

    // to insert a new node in the linked list at the headTop of the single linked list
    void insertHead(int data){

        //create a new node pointer object
        Node* newNode = new Node(data);
        if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next = this->head;
        this->head=newNode;
    }

    // to insert a new node in the linked list at the end or tail of the single linked list
    void insertAtEnd(int value){

        //create a new node pointer object
        Node* newNode = new Node(value);
        if(head==NULL){
            head=newNode;
        }
        else{
            Node* temp = head;
            while(temp->next != NULL){
                temp=temp->next;
            }
            temp->next = newNode;
        }
    }

    void deleteAtBeginning(){
        if(head == NULL){
            cout<<"The list is empty" << endl;
            return;
        }
        Node* temp = head;
        head=temp->next;

    }

    // to find the middle element of the single linked list
    void findMiddleElement(){

        Node* slowTempNode = head;
        Node* fastTempNode = head;

        while(fastTempNode->next != nullptr && fastTempNode->next->next != nullptr){
            slowTempNode =  slowTempNode->next;
            fastTempNode =  fastTempNode->next->next;
        }

        cout << "Found the Middle Element- Address:" << slowTempNode->next << ", Data: "<< slowTempNode->data << endl;
    }


    // to find the middle element of the single linked list
    void deleteNodeAtPosition(int positionIndex){

        int count = 0;

        //Check Empty Case
        if(head == NULL){
            cout<<"The list is empty" << endl;
            return;
        }

        // Check if the user wants to remove a node at the start of the single linked list.
        if (positionIndex == 0){
            Node* temp = head;
            head=temp->next;
            return;
        }

        // Traverse and Iterate over the linked list until you reach the node the user wants to remove
        Node* curr_Node = head;
        while(curr_Node->next != nullptr && positionIndex-1 != count){

            // Since Linked Lists have no index keep count
            count += 1;
            curr_Node =  curr_Node->next;
        }

        // to get the node you want to remove
        Node *tempNode = curr_Node->next;

        cout << "Deleting Data:" << tempNode->data << ", Address: " << curr_Node->next << endl;

        // reassign the addressing
        curr_Node->next = tempNode->next;

        //delete the node
        delete tempNode;

    }

    // to insert a new node in the linked list at the headTop of the single linked list
    void reverseSingleLinkedList(){

        //create a new node pointer object
        Node* prevNode = NULL;
        Node* currentNode = head;
        Node* nextNode = NULL;

        while(currentNode != NULL){
            nextNode = currentNode->next; // To Store the Next Node in the List
            currentNode->next = prevNode; // Doing the Reverse Operation on the Node by redirecting pointer

            // iterating over the list backwards
            prevNode = currentNode; // Move the headTop node to the tail node
            currentNode = nextNode;// Move the next node to the headTop node
        }

        head = prevNode;
    }


    void deleteAtEnd(){
        if(head == NULL){
            cout<<"The list is empty" << endl;
            return;
        }
        if(head->next == NULL){
            delete head;
            head = NULL;
            return;
        }
        Node* last_node= head;
        while(last_node->next->next != NULL){
            last_node = last_node->next;
        }
        delete last_node->next;
        last_node->next = NULL;
    }


    void toPrint(){
        Node *temp=head;
        if(head==NULL){
            cout << "There is no items";
            return;
        }
        while(temp!=NULL){
            cout<< "Data:" << temp->data << " Address:" << temp->next<< "  |  ";

            //this is how you iterate ove next node in list
            temp = temp->next;
        }
        cout<<endl;
    }

};

void mainMenuCatalog(){
    string userInput;
    while(true){
        cout << "Event Ticket Booking System: MAIN MENU";
        cout << endl;
        cout << "Please Select an Option: "<< endl;
        cout << "1. Book a Seat" << endl;
        cout << "2. Cancel a Seat" << endl;
        cout << "3. Show Available Seats" << endl;
        cout << "4. Exit" << endl;

        cout << "Insertion Selection Number: ";
        cin >> userInput;
        cout << endl;

        if(userInput == "1"){
            cout << endl;
            cout << "You selected to Book a Seat" << endl;
            cout << endl;
        }
        else if(userInput == "2"){
            cout << endl;
            cout << "You selected to Cancel a Seat" << endl;
            cout << endl;
        }
        else if(userInput == "3"){
            cout << endl;
            cout << "You selected Display Available Seats. Please reselect you input" << endl;
            cout << endl;
        }
        else if(userInput == "4"){
            cout << endl;
            cout << "You selected an invalid option. Please reselect you input" << endl;
            cout << endl;
            break;
        }
        else{
            cout << endl;
            cout << "You selected an invalid option. Please reselect you input" << endl;
            cout << endl;
        }

    }
}


int main() {
    mainMenuCatalog();
}
