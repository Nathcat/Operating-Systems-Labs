#include <stdio.h>
#include <string.h>

int main(void){

	char test1[] = "hello";
	char test2[10];
	char test3[100] = "bye";

	//
	// The following would output:
	// 5
	// 6
	// 6
	//
	// Note that the last two are the same, since the base size of a char is 1 byte,
	// sizeof returns the total number of bytes contained by something (in this case an array),
	// hence it would return 6, since the string contains 5 characters plus a null terminator.
	//
	printf("%d\n",strlen(test1));
	printf("%d\n", sizeof(test1));
	printf("%d\n", sizeof(test1) / sizeof(char));

	//
	// The following would output:
	// 0
	// 10
	//
	// Note that the first might depend on how the system allocates the array,
	// i.e. whether it initialises all values to be 0, or takes whatever values
	// were already in that place in memory.
	//
	printf("%d\n",strlen(test2));
	printf("%d\n", sizeof(test2));

	//
	// The following would output:
	// 3
	// 100
	//
	printf("%d\n",strlen(test3));
	printf("%d\n", sizeof(test3));

	//
	// The following would output:
	// 0
	// 100
	//
	// Since we are copying an empty string into the array test3, but not modifying the actual
	// array itself.
	//
	strcpy(test3,test2);
	printf("%d\n",strlen(test3));
	printf("%d\n", sizeof(test3));

	//
	// The following would output:
	// 5
	// 100
	// world
	// rld
	//
	strcat(test3, "world");
	printf("%d\n",strlen(test3));
	printf("%d\n", sizeof(test3));
	printf("%s\n", test3);

	printf("%s\n",strstr(test3, "rl"));

	return 0;
}
