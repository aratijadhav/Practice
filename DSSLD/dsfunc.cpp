#include "all.h"

int iLength=0, iCheck_Available = 0;
void *p=NULL;

void SinglyLLL1(){
	SinglyLLL *ptr=NULL;
	SinglyLLL *(*fp1)()=NULL;
	void (*fp2)(SinglyLLL *)=NULL;

	p=dlopen("/home/arati/Desktop/DSSLD/dot so files/libSLLL.so",RTLD_LAZY);
	if(!p)
	{
		printf("Unable to load slll Library\n");
		return;
	}

	fp1=(SinglyLLL *(*)())dlsym(p,"create");
	fp2=(void(*)(SinglyLLL*))dlsym(p,"destroy");
	ptr=fp1();


	printf("\n1 Inserted at Last position:\n");
	ptr->Insert_Last(1);

	printf("\n2 Inserted at Last position:\n");
	ptr->Insert_Last(2);

	printf("\n3 Inserted at Last position:\n");
	ptr->Insert_Last(3);

	printf("\n0 Inserted at first position\n");
	ptr->Insert_First(0);

	iLength=ptr->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\n4 is inserted at position 3:\n");
	ptr->Insert_Position(3,4);				//Parameters: (head,position,value)

	printf("\n5 is inserted at last position\n");
	ptr->Insert_Last(5);

	iLength=ptr->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\nDelete first node:\n");
	ptr->Delete_First();

	printf("\nAgain Delete first node:\n");
	ptr->Delete_First();

	printf("\nDelete node at position 2:\n");
	ptr->Delete_Position(2);

	printf("\nDelete node by value 4:\n");
	ptr->Delete_By_Value(4);

	printf("\nInsert 6 at last position:\n");
	ptr->Insert_Last(6);

	iLength=ptr->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\nInsert 7 at last position:\n");
	ptr->Insert_Last(7);

	printf("\nDelete last node of linked list:\n");
	ptr->Delete_Last();

	printf("\nvalue present on position: 2\n");
	iCheck_Available=ptr->Search_By_Position(2);

	printf("\nvalue present on position: -1\n");
	iCheck_Available=ptr->Search_By_Position(-1);

	printf("\nCheck if value available: 6\n");
	iCheck_Available=ptr->Search_By_Value(6);
	
	printf("\nCheck if value available: -2\n");
	iCheck_Available=ptr->Search_By_Value(-2);

	iLength=ptr->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	fp2(ptr);
	dlclose(p);
}




void SinglyCLL1(){	
	SinglyCLL *obj1=NULL;
	SinglyCLL *(*fp1)()=NULL;
	void (*fp2)(SinglyCLL *)=NULL;

	p=dlopen("/home/arati/Desktop/DSSLD/dot so files/libSCLL.so",RTLD_LAZY);
	if(!p)
	{
		printf("Unable to load slll Library\n");
		return ;
	}

	fp1=(SinglyCLL *(*)())dlsym(p,"create");
	fp2=(void(*)(SinglyCLL*))dlsym(p,"destroy");
	obj1=fp1();
	int iValue=0,iCheck_Available=0,iLength=0;

	printf("\n1 Inserted at Last position:\n");
	obj1->Insert_Last(1);

	printf("\n2 Inserted at Last position:\n");
	obj1->Insert_Last(2);

	printf("\n3 Inserted at Last position:\n");
	obj1->Insert_Last(3);

	printf("\n0 Inserted at first position\n");
	obj1->Insert_First(0);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\n4 is inserted at position 3:\n");
	obj1->Insert_Position(3,4);

	printf("\n5 is inserted at last position\n");
	obj1->Insert_Last(5);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\nDelete first node:\n");
	obj1->Delete_First();

	printf("\nAgain Delete first node:\n");
	obj1->Delete_First();

	printf("\nDelete node at position 2:\n");
	obj1->Delete_Position(2);

	printf("\nDelete node by value 4:\n");
	obj1->Delete_By_Value(4);

	printf("\nInsert 6 at last position:\n");
	obj1->Insert_Last(6);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\nInsert 7 at last position:\n");
	obj1->Insert_Last(7);

	printf("\nDelete last node of linked list:\n");
	obj1->Delete_Last();

	printf("\nvalue present on position: 2\n");
	iCheck_Available=obj1->Search_By_Position(2);

	printf("\nvalue present on position: -1\n");
	iCheck_Available=obj1->Search_By_Position(-1);

	printf("\nCheck if value available: 6\n");
	iCheck_Available=obj1->Search_By_Value(6);
	
	printf("\nCheck if value available: -2\n");
	iCheck_Available=obj1->Search_By_Value(-2);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

}



void DoublyLLL1(){
	DoublyLLL *obj1=NULL;
	DoublyLLL *(*fp1)()=NULL;
	void (*fp2)(DoublyLLL *)=NULL;

	p=dlopen("/home/arati/Desktop/DSSLD/dot so files/libDLLL.so",RTLD_LAZY);
	if(!p)
	{
		printf("Unable to load slll Library\n");
		return ;
	}

	fp1=(DoublyLLL *(*)())dlsym(p,"create");
	fp2=(void(*)(DoublyLLL*))dlsym(p,"destroy");
	obj1=fp1();
	int iValue=0,iCheckAvailable=0,iLength=0;



/*
	DoublyLLL *obj1=NULL;
	DoublyLLL *(*fp1)()=NULL;
	void (*fp2)(DoublyLLL *)=NULL;

	p=dlopen("/home/arati/Desktop/DSSLD/dot so files/libDLLL.so",RTLD_LAZY);
	if(!p)
	{
		printf("Unable to load slll Library\n");
		return;
	}

	fp1=(DoublyLLL *(*)())dlsym(p,"create");
	fp2=(void(*)(DoublyLLL*))dlsym(p,"destroy");
	obj1=fp1();
	int iValue=0,iCheckAvailable=0,iLength=0;
*/
	printf("\n1 Inserted at Last position:\n");
	obj1->InsertLast(1);

	printf("\n2 Inserted at Last position:\n");
	obj1->InsertLast(2);

	printf("\n3 Inserted at Last position:\n");
	obj1->InsertLast(3);

	printf("\n0 Inserted at first position\n");
	obj1->InsertFirst(0);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\n4 is inserted at position 3:\n");
	obj1->InsertPosition(3,4);

	printf("\n5 is inserted at last position\n");
	obj1->InsertLast(5);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\nDelete first node:\n");
	obj1->DeleteFirst();

	printf("\nAgain Delete first node:\n");
	obj1->DeleteFirst();

	printf("\nDelete node at position 2:\n");
	obj1->DeletePosition(2);

	printf("\nDelete node by value 4:\n");
	obj1->DeleteByValue(4);

	printf("\nInsert 6 at last position:\n");
	obj1->InsertLast(6);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\nInsert 7 at last position:\n");
	obj1->InsertLast(7);

	printf("\nDelete last node of linked list:\n");
	obj1->DeleteLast();

	printf("\nvalue present on position: 2\n");
	iCheckAvailable=obj1->SearchByPosition(2);

	printf("\nvalue present on position: -1\n");
	iCheckAvailable=obj1->SearchByPosition(-1);

	printf("\nCheck if value available: 6\n");
	iCheckAvailable=obj1->SearchByValue(6);
	
	printf("\nCheck if value available: -2\n");
	iCheckAvailable=obj1->SearchByValue(-2);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

}


/*
void SinglyCLL1(){
	int iLength=0, iCheck_Available = 0;
	void *p=NULL;
	SinglyCLL *obj1=NULL;
	SinglyCLL *(*fp1)()=NULL;
	void (*fp2)(SinglyCLL *)=NULL;

	p=dlopen("/home/arati/Desktop/DSSLD/dot so files/libSCLL.so",RTLD_LAZY);
	if(!p)
	{
		printf("Unable to load slll Library\n");
		return 0;
	}

	fp1=(SinglyCLL *(*)())dlsym(p,"create");
	fp2=(void(*)(SinglyCLL*))dlsym(p,"destroy");
	ptr=fp1();
	int iValue=0,iCheck_Available=0,iLength=0;

	SinglyCLL *obj1 = new SinglyCLL;

	printf("\n1 Inserted at Last position:\n");
	obj1->Insert_Last(1);

	printf("\n2 Inserted at Last position:\n");
	obj1->Insert_Last(2);

	printf("\n3 Inserted at Last position:\n");
	obj1->Insert_Last(3);

	printf("\n0 Inserted at first position\n");
	obj1->Insert_First(0);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\n4 is inserted at position 3:\n");
	obj1->Insert_Position(3,4);

	printf("\n5 is inserted at last position\n");
	obj1->Insert_Last(5);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\nDelete first node:\n");
	obj1->Delete_First();

	printf("\nAgain Delete first node:\n");
	obj1->Delete_First();

	printf("\nDelete node at position 2:\n");
	obj1->Delete_Position(2);

	printf("\nDelete node by value 4:\n");
	obj1->Delete_By_Value(4);

	printf("\nInsert 6 at last position:\n");
	obj1->Insert_Last(6);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\nInsert 7 at last position:\n");
	obj1->Insert_Last(7);

	printf("\nDelete last node of linked list:\n");
	obj1->Delete_Last();

	printf("\nvalue present on position: 2\n");
	iCheck_Available=obj1->Search_By_Position(2);

	printf("\nvalue present on position: -1\n");
	iCheck_Available=obj1->Search_By_Position(-1);

	printf("\nCheck if value available: 6\n");
	iCheck_Available=obj1->Search_By_Value(6);
	
	printf("\nCheck if value available: -2\n");
	iCheck_Available=obj1->Search_By_Value(-2);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

}



void SinglyCLL1(){
	int iLength=0, iCheck_Available = 0;
	void *p=NULL;
	SinglyCLL *obj1=NULL;
	SinglyCLL *(*fp1)()=NULL;
	void (*fp2)(SinglyCLL *)=NULL;

	p=dlopen("/home/arati/Desktop/DSSLD/dot so files/libSCLL.so",RTLD_LAZY);
	if(!p)
	{
		printf("Unable to load slll Library\n");
		return 0;
	}

	fp1=(SinglyCLL *(*)())dlsym(p,"create");
	fp2=(void(*)(SinglyCLL*))dlsym(p,"destroy");
	ptr=fp1();
	int iValue=0,iCheck_Available=0,iLength=0;

	SinglyCLL *obj1 = new SinglyCLL;

	printf("\n1 Inserted at Last position:\n");
	obj1->Insert_Last(1);

	printf("\n2 Inserted at Last position:\n");
	obj1->Insert_Last(2);

	printf("\n3 Inserted at Last position:\n");
	obj1->Insert_Last(3);

	printf("\n0 Inserted at first position\n");
	obj1->Insert_First(0);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\n4 is inserted at position 3:\n");
	obj1->Insert_Position(3,4);

	printf("\n5 is inserted at last position\n");
	obj1->Insert_Last(5);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\nDelete first node:\n");
	obj1->Delete_First();

	printf("\nAgain Delete first node:\n");
	obj1->Delete_First();

	printf("\nDelete node at position 2:\n");
	obj1->Delete_Position(2);

	printf("\nDelete node by value 4:\n");
	obj1->Delete_By_Value(4);

	printf("\nInsert 6 at last position:\n");
	obj1->Insert_Last(6);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

	printf("\nInsert 7 at last position:\n");
	obj1->Insert_Last(7);

	printf("\nDelete last node of linked list:\n");
	obj1->Delete_Last();

	printf("\nvalue present on position: 2\n");
	iCheck_Available=obj1->Search_By_Position(2);

	printf("\nvalue present on position: -1\n");
	iCheck_Available=obj1->Search_By_Position(-1);

	printf("\nCheck if value available: 6\n");
	iCheck_Available=obj1->Search_By_Value(6);
	
	printf("\nCheck if value available: -2\n");
	iCheck_Available=obj1->Search_By_Value(-2);

	iLength=obj1->Length();
	printf("\nLength of Linked list is %d\n",iLength);

}
*/
