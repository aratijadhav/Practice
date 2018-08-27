//node structure using typedef
typedef struct node1{
	int iData;
	struct node1* next;
}NODE1,*PNODE1;

typedef struct node2{
	struct node2* prev;
	int iData;
	struct node2* next;
}NODE2,*PNODE2;

typedef struct node3{
    int iData;
    struct node3 *left;
    struct node3 *right;
}NODE3,*PNODE3;


//start of function prototypes
class SinglyLLL{
	private:
		PNODE1 head;
		PNODE1 last;
	public:
		SinglyLLL();									//constructor
		~SinglyLLL();								//Destructor
		virtual PNODE1 Create(int);							//Parameters: (int)
		virtual void Insert_First(int);						//parameters: (head,value)
		virtual void Insert_Position(int,int);				//parameters: (head,position,value)
		virtual void Insert_Last(int);						//parameters: (head,value)
		virtual void Delete_First();						//parameters: (head)
		virtual void Delete_Position(int);					//parameters: (head,position)
		virtual void Delete_By_Value(int);					//parametets: (head,value)
		virtual void Delete_Last();							//parameters: (head)
		virtual int Search_By_Position(int);				//parameters: (head,position)
		virtual int Search_By_Value(int);					//parameters: (head,value)
		virtual int Length();								//parameters: (head)
		virtual void Disp();								//parameters: (head)
};


class SinglyCLL{
	private:
		PNODE1 head;
		PNODE1 last;
	public:
		SinglyCLL();									//constructor
		~SinglyCLL();									//Destructor
		virtual PNODE1 Create(int);								//created a single node
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



//start of function prototypes
class DoublyLLL{
	private:
		PNODE2 head;
		PNODE2 last;
	public:
		DoublyLLL();									//constructor
		~DoublyLLL();								//destructor
		virtual PNODE2 Create(int);							//Parameters: (int)
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



class DoublyCLL{
	private:
		PNODE2 head;
		PNODE2 last;
	public:
		DoublyCLL();									//constructor
		~DoublyCLL();								//destructor
		virtual PNODE2 Create(int);							//Parameters: (int)
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



class Queue{
    private:
        PNODE1 head;
        PNODE1 tail;
    public:
        Queue();
        ~Queue();
        virtual void enqueue(int);
        virtual void dequeue();
        virtual void disp();
        virtual PNODE1 create(int);
};



class Stack{
    private:
        PNODE1 top;
    public:
        Stack();
        ~Stack();
        virtual void push(int);
        virtual void pop();
        virtual void disp();
        virtual PNODE1 create(int);
};



//class of BST
class BST{
    private:
       PNODE3 root;
    public:
        BST();
        ~BST();
        virtual PNODE3 CreateNode(int);
        virtual void Insert(int);
        virtual void Delete(int);
        virtual void Search(int);
        virtual void PreOrder();
        virtual void PreOrder1(PNODE3);
        virtual void InOrder();
        virtual void InOrder1(PNODE3);
        virtual void PostOrder();
        virtual void PostOrder1(PNODE3);
};
//end of function prototypes
