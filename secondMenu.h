#ifndef SECONDMENU_H
#define SECONDMENU_H

#include "mainMenu.h"
#include <stdio.h>
#include <stdlib.h>

void mainFunc();

void secondFunc()
{
	int choice;

	printf(":: In secondFunc() :: \n");
	printf("(1) Back to mainFunc() \n");
	printf("(2) Exit the program \n");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			mainFunc();
		break;
		case 2:
			exit(-1);
		break;
	}
}

#endif
