#include <stdio.h>
#include <string.h>
#include "phone.h"

void registerPhoneData()
{
	{
		const char* str1 = "qwerty1234";
		char str2[20];
		int i = 1;
		while(1){
			printf("Password:\n");
			scanf("%s", str2);
			if(!(strcmp(str1, str2)))
			{
				printf("New User Name: ");
				scanf("%s", PhoneBook[size].Name);
				printf("PhoneNumber: ");
				scanf("%s", PhoneBook[size].PhoneNumber);
				printf("Registered...\n");
				size++;
				return ;
			}
			else
			{
				if(i == 1){
					printf(">>Not Matched!!!\n");
					i++;
				}
				else if(i == 2){
					printf(">>Not Matched!!!(twice)\n");
					i++;
				}
				else if(i ==3){
					printf(">>Not Matched!!!(3 times)\n");
					i++;
				}
				else{
					printf("You are not allowed to access PhoneBook.\n");
					break;
				}
			}
		}
		return ;
	}
}
