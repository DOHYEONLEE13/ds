#pragma once
float coef;
typedef struct Listnode{
	float coef;		// 계수
	int expo;		// 지수
	struct Listnode* link;
} ListNode;

typedef struct {
	ListNode* head;
} ListHead;

ListHead* createLinkedList(void);
void appendTerm(ListHead* L, float coef, int expo);
void addPoly(ListHead* A, ListHead* B, ListHead* C);
void printPoly(ListHead* L);