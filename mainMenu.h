#ifndef MAINMENU_H
#define MAINMENU_H

#include "secondMenu.h"
#include <stdio.h>
#include <stdlib.h>

void secondFunc();

void mainFunc()
{
	int choice;

	printf(":: In mainFunc() :: \n");
	printf("(1) Enter secondFunc() \n");
	printf("(2) Exit the program \n");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			secondFunc();
		break;
		case 2:
			exit(-1);
		break;
	}
}

#endif
