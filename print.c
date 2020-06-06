#include <stdio.h>
#include "phone.h"


void print()
{
	printf("Print all contants in the PhoneBook\n");
	printArray(PhoneBook, size);
}
void printArray(void* PhoneBook, int size)
{
        int i;
        void* vp;
        vp = PhoneBook;
        for(i = 0; i < size; i++)
        {
                printf("name : %s\tphone : %s\n", ((Contact*)vp + i)->Name, ((Contact*)vp + i)->PhoneNumber);
        }
        printf("\n");
}

