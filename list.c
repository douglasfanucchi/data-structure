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
