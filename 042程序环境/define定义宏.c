#include <stdio.h>
//#define SQUARE(X) ((X)*(X))
//#define PRINT(N) printf("the value of "#N" is %d\n",N)

//那如果要实现一个宏，既能整型又能浮点型呢？
//#define PRINT(N,FORMAT) printf("the value of "#N" is "FORMAT"\n",N)

#define CAT(Class,Num) Class##Num
int main()
{
	/*int r = SQUARE(5 + 1);
	printf("%d\n", r);*/

	/*int a = 10;
	int b = 20;
	PRINT(a);
	PRINT(b);*/

	/*float f = 3.14f;
	PRINT(f, "%lf");*/

	int Class106 = 100;
	printf("%d\n", CAT(Class, 106));
	return 0;
}