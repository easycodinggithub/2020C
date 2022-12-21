#include <stdio.h>
int main6() {

	int num = 15;
	int result1 = num << 1; // numÀÇ ºñÆ® ¿­À» ¿ŞÂÊÀ¸·Î 1Ä­¾¿ ÀÌµ¿
	int result2 = num << 2; // numÀÇ ºñÆ® ¿­À» ¿ŞÂÊÀ¸·Î 2Ä­¾¿ ÀÌµ¿
	int result3 = num << 3; // numÀÇ ºñÆ® ¿­À» ¿ŞÂÊÀ¸·Î 3Ä­¾¿ ÀÌµ¿

	printf("1Ä­ ÀÌµ¿ °á°ú %d \n", result1);
	printf("2Ä­ ÀÌµ¿ °á°ú %d \n", result2);
	printf("3Ä­ ÀÌµ¿ °á°ú %d \n", result3);

	//int n = 2;
	//printf("%d \n", n);
	//printf("%d \n", n<<1);
	//printf("%d \n", n<<2);
	//printf("%d \n", n<<3);
	//printf("%d \n", n<<4);
	//printf("%d \n", n<<5);
	//printf("%d \n", n<<6);
	//printf("%d \n", n<<7);
	//printf("%d \n", n<<8);
	//printf("%d \n", n<<9);
	//printf("%d \n", n<<10);
	//printf("%d \n", n<<11);
	//printf("%d \n", n<<12);
	//printf("%d \n", n<<13);
	//printf("%d \n", n<<14);
	//printf("%d \n", n<<15);
	//printf("%d \n", n<<16);
	//printf("%d \n", n<<17);

	//printf("%d \n", n << 30);

	int n = 1024;
	printf("%d \n", n);
	printf("%d \n", n >> 1);
	printf("%d \n", n >> 2);
	printf("%d \n", n >> 3);
	printf("%d \n", n >> 4);
	printf("%d \n", n >> 5);
	printf("%d \n", n >> 6);
	printf("%d \n", n >> 7);
	printf("%d \n", n >> 8);
	printf("%d \n", n >> 9);
	printf("%d \n", n >> 10);
	printf("%d \n", n >> 11);
	printf("%d \n", n >> 12);
	printf("%d \n", n >> 13);
	printf("%d \n", n >> 14);
	printf("%d \n", n >> 15);
	printf("%d \n", n >> 16);
	printf("%d \n", n >> 17);

	printf("%d \n", n >> 30);
}