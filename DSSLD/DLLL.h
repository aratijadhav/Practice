//header files inclusion
using namespace std;
#include<iostream>

//node structure using typedef
typedef struct node2{
	struct node2* prev;
	int iData;
	struct node2* next;
}NODE2,*PNODE2;

//start of function prototypes
class DoublyLLL{
	private:
		PNODE2 head;
		PNODE2 last;
	public:
		DoublyLLL();									//constructor
		~DoublyLLL();								//destructor
		PNODE2 Create(int);							//Parameters: (int)
		virtual void InsertFirst(int);						//parameters: (head,value)
		virtual void InsertPosition(int,int);				//parameters: (head,position,value)
		virtual void InsertLast(int);						//parameters: (head,value)
		virtual void DeleteFirst();							//parameters: (head)
		virtual void DeletePosition(int);					//parameters: (head,position)
		virtual void DeleteByValue(int);					//parametets: (head,value)
		virtual void DeleteLast();							//parameters: (head)
		virtual int SearchByPosition(int);					//parameters: (head,position)
		virtual int SearchByValue(int);						//parameters: (head,value)
		virtual int Length();								//parameters: (head)
		virtual void Disp();								//parameters: (head)
		virtual void DispRev();
};
//end of function prototypes
