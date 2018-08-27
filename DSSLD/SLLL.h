//node structure using typedef
typedef struct node {
	int iData;
	struct node* next;
}NODE,*PNODE;

//start of function prototypes
class SinglyLLL{
	private:
		PNODE head;
		PNODE last;
	public:
		SinglyLLL();									//constructor
		~SinglyLLL();								//Destructor
		virtual PNODE Create(int);							//Parameters: (int)
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
//end of function prototypes
