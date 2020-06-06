#include <stdio.h>
#include <string.h>
#include "phone.h"

void searchByName()
	{
		printf("Search by Name\n");
		char name[20];
		int i = 0;
		printf(">>Enter a name to search: ");
		scanf("%s", name);
		for(i = 0; i < size; i++){
			if(!(strcmp(name, PhoneBook[i].Name)))
				break;
		}
		if(i != size)
		{
			printf("%s\t\t%s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
		}
		else
			printf("Oops! %s is not in the PhoneBook.\n", name);
		return;
	}


