#include <stdio.h>
#include <string.h>
#include "phone.h"

void deleteByName()
	{
		char name[20];
		int i = 0;
		printf(">>Enter a name to delete: ");
		scanf("%s", name);
		for(i = 0; i < size; i++){
			if(!(strcmp(name, PhoneBook[i].Name)))
				break;
		}
		if(i != size){
			for(int j = i + 1; j <= size; j++){
				strcpy(PhoneBook[i].Name, PhoneBook[j].Name);
				strcpy(PhoneBook[i].PhoneNumber, PhoneBook[j].PhoneNumber);
				i++;
			}
			printf("%s is deleted\n", name);
			size--;
		}
		else
			printf("Oops! %s is not in the PhoneBook.\n", name);
		return ;
	}
