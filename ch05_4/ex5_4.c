#include <stdio.h>
#include "stackL.h"
#include "evalPostfix.h"  

int main(void) {
	int result;
	char* express = "35*62/-";
	printf("ÈÄÀ§ Ç¥±â½Ä : %s", express);

	result = evalPostfix(express);
	printf("\n\n¿¬»ê °á°ú => %d\n", result);

	getchar();  return 0;
}