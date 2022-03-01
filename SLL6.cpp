#include<iostream>

using namespace std;

struct Baju{
	string merek, jenis;
	int ukuran;
	
	Baju *next;
	
};

Baju *head, *tail, *cur, *newNode,*del, *after;


void createSingleLinkedList(string m, string j, int uk){
	head = new Baju();
	head->merek = m;
	head->jenis = j;
	head->ukuran = uk;
	head->next = NULL;
	tail = head;
	
}

int countSingleLinkedList(){
	cur = head;
	int NO = 0;
	while(cur != NULL){
		NO++;
		cur = cur->next;
	}
	return NO;
}

void addFirst(string m, string j, int uk){
	newNode = new Baju();
	newNode->merek = m;
	newNode->jenis = j;
	newNode->ukuran = uk;
	newNode->next = head;
	head = newNode;
}

void addMiddle(string merek, string jenis, int uK, int posisi){
	newNode = new Baju();
	newNode->merek = merek;
	newNode->jenis = jenis;
	newNode->ukuran = uK;
	
	cur = head;
	int NO = 1;
	while(NO < posisi - 1 ){
		cur = cur->next;
		NO++;
	}
	
	newNode->next = cur->next;
	cur->next = newNode;
}

void removeMiddle(int posisi){
	if ( posisi < 1 || posisi > countSingleLinkedList() ){
		cout << "Posisi Diluar jangkauan " << endl;
	}else if( posisi == 1 || posisi == countSingleLinkedList() ){
		cout << "Posisi bukan posisi tengah " << endl;
	} else {
	int NO = 1;
	cur = head;
	while (NO <= posisi){
		if (NO == posisi -1){
			after = cur;
		}
		if (NO == posisi){
			del = cur;
		}
		cur = cur->next;
		NO++;
	}
	after->next = cur;
	delete del;
	}
}

void printSingleLinkedList(){
	cout << "Nomor data ada : " << countSingleLinkedList() << endl;
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
	
	addFirst("Supreme", "Crewneck", 41);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addMiddle("NIKE", "Hoodie", 38, 2);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addMiddle("Addidas", "Kaos", 44, 2);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	removeMiddle(2);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
}
