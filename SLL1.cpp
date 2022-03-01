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

void addFirst(string m, string j, int uk){
	newNode = new Baju();
	newNode->merek = m;
	newNode->jenis = j;
	newNode->ukuran = uk;
	newNode->next = head;
	head = newNode;
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
	
	addFirst("GUCCI", "Kemeja", 39);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
}
