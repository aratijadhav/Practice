#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include "dsfunc.cpp"
#include "class_user.h"

int main()
{
	int choice=0;

	printf("\nEnter Choice");
	printf("\n1.Singly Linear");
	printf("\n2.Singly Circular");
	printf("\n3.Doubly Linear");
	printf("\n4.Doubly CIrcular");
	printf("\n5.stack");
	printf("\n6.queue");
	printf("\n7.BST");
	scanf("%d",&choice);

	switch(choice){
		case 1:
			SinglyLLL1();
			break;

		case 2:
			SinglyCLL1();
			break;

		case 3:
			DoublyLLL1();
			break;
/*
		case 4:
			DoublyCLL1();
			break;

		case 5:
			Stack1();
			break;

		case 6:
			Queue1();
			break;

		case 7:
			BST();
			break;
*/	}
	return 0;

}
