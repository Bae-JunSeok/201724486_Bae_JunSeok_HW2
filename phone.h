#ifndef __PHONE_H__
#define __PHONE_H__


#define MAX 50

void registerPhoneData();
void print();
void printArray(void* arr, int size);
void searchByName();
void deleteByName();
void sort();

extern void (*pFuncs[5])();

typedef int (*cmp)(const void*, int, int);
typedef int (*swap)(void*, int, int);

void sortPhoneBook(void*, int, cmp, swap);

int contactCmpr(const void*, int, int);
int contactSwap(void*, int, int);

static int count_service = 0;

typedef struct contact_st
{
	char Name[10];
	char PhoneNumber[13];
} Contact;

Contact PhoneBook[MAX];

int size;


#endif
