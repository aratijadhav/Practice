//header files inclusion
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//start of function prototypes
class SinglyCLL{
	private:
		PNODE head;
		PNODE last;
	public:
		SinglyCLL();									//constructor
		~SinglyCLL();									//Destructor
		virtual PNODE Create(int);								//created a single node
		virtual void Insert_First(int);							//insert at first position
		virtual void Insert_Position(int,int);					//inserts at givn position
		virtual void Insert_Last(int);							//inserts at last position
		virtual void Delete_First();							//deletes node present at first node
		virtual void Delete_Position(int);						//deletes node at given position
		virtual void Delete_By_Value(int);						//deletes node by given value
		virtual void Delete_Last();								//deletes last node
		virtual int Search_By_Position(int);					//searches node y position
		virtual int Search_By_Value(int);						//searches node by value
		virtual int Length();									//gives length of linked list
		virtual void Disp();									//diplays linked list
};
//end of function prototypes
