#include <stdio.h>

void main() {
	#define MAX 50

	typedef struct{
		int index;
	} REGISTERS;

	typedef struct{
		int qtElements;
		REGISTERS elements[MAX];
	} List;
}

void initList(List* l) {
	l->qtElements = 0;
}

int elementsCount(List* l) {
	return l->qtElements;
}
