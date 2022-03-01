#include<iostream>

using namespace std;

struct Baju{
	string merek, jenis;
	int ukuran;
	
	Baju *next;
	
};

Baju *head, *tail, *cur, *newNode;


void createSingleLinkedList(string m, string j, int uk){
	head = new Baju();
	head->merek = m;
	head->jenis = j;
	head->ukuran = uk;
	head->next = NULL;
	tail = head;
	
}

void addLast(string m, string j, int uk){
	newNode = new Baju();
	newNode->merek = m;
	newNode->jenis = j;
	newNode->ukuran = uk;
	newNode->next = NULL;
	tail->next = newNode;
	tail=newNode;
}

void printSingleLinkedList(){
	cur = head;
	while(cur != NULL){
		cout << "Merek Baju : "<< cur->merek <<endl;
		cout << "Jenis Baju : "<< cur->jenis <<endl;
		cout << "Ukuran Baju : "<< cur->ukuran <<endl;
		
		cur = cur->next;
	}
}

int main(){
	
	createSingleLinkedList("H&M", "Kaos", 40);
	
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addLast("Supreme", "Crewneck", 41);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	
	
}
