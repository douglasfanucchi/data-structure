#include <stdio.h>
#include <stdbool.h>

void main() {
	#define MAX 50

	typedef struct {
		int index;
	} REGISTERS;

	typedef struct {
		int qtElements;
		REGISTERS elements[MAX];
	} List;
	
	void initList(List* l) {
        	l->qtElements = 0;
	}

	int elementsCount(List* l) {
        	return l->qtElements;
	}

	bool printList(List* l) {
		if( elementsCount(l) < 0 || elementsCount(l) > MAX )
			return false;	

		for( int i = 0; i < l->qtElements; i++ ) 
			printf("Index -> %d \n", l->elements[i].index);

		return true;
	}

	int searchElements(List* l, int index) {
		if( elementsCount(l) < 1 || elementsCount(l) > 50 ) 
			return -1;

		for( int i = 0; i < l->qtElements; i++ )
			if( l->elements[i].index == index )
				return i;

		return -1;
	}
}
