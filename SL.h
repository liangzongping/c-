#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

typedef struct s {
	int* a;
	int size;
	int capacity;
}STU;
void SeqlistInit(STU* p);
void SeqlistPush(STU* p, int x);
void Seqlistprint(STU* p);
void Seqlistdestory(STU* p);
void Seqlistcheckcapacity(STU* p);
void SeqlistpushFront(STU* p, int x);