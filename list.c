#include <stdio.h>
#include <stdbool.h>

void main() {
	#define MAX 50

	typedef struct {
		int index;
	} REGISTER;

	typedef struct {
		int qtElements;
		REGISTER elements[MAX];
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

	int searchElement(List* l, int index) {
		if( elementsCount(l) < 1 || elementsCount(l) > 50 ) 
			return -1;

		for( int i = 0; i < l->qtElements; i++ )
			if( l->elements[i].index == index )
				return i;

		return -1;
	}

	bool insertElement(List *l, REGISTER element, int key) {
		if( elementsCount(l) == MAX || key < 0 || key > elementsCount(l) ) return false;

		for( int i = elementsCount(l); i > key; i-- ) 
			l->elements[i] = l->elements[i - 1];

		l->elements[key] = element;
		l->qtElements++;

		return true;
	}

	bool deleteElement(List* l, int index) {
		int position = searchElement(l, index);

		if( position == -1) return false;
	
		for(int i = position; i < l->qtElements - 1; i++)
			l->elements[i] = l->elements[i + 1];

		l->qtElements--;
		return true;
	}


}
