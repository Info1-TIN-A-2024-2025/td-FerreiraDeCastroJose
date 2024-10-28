#include <stdint.h>
#include <stdio.h>

int main(int argc, const char *argv[])
{
	float a = 2.716;
	double b = 3.3;
	long double c = 3.1415;

	char d = 34;
	unsigned char e = 5;
	short f = 54;
	unsigned short g = 45;
	long h = 35;
	unsigned long j = 35;

	int k = 4;
	unsigned int l = 34;
	uint8_t n = 24; //include stdint

	k = 0;
	printf(" k = %d\n", k);//%d base 10 integer

	k = 18;
	printf(" k = %d\n", k);//%d base 10 integer

	k = 0b00010010; //base 2
	printf(" k = %d\n", k);//%d base 10 integer

	k = 053; //base 8 commence par 0
	printf(" k = %d\n", k);//%d base 10 integer

	k = 0x53; //base 4 Hexadécimal
	printf(" k = %d\n", k);//%d base 10 integer
	printf(" k = %0\n", k);//%0 base octane/8 integer
	printf(" k = %x\n", k);//%x base  16 integer
	printf(" k = %X\n", k);//%x base  16 integer
	printf(" k = %b\n", k);//%b base  2 integer

	k = -1;
	printf(" k = %d\n", k);//%d base 10 integer
	printf(" k = %b\n", k);//%b base  2 integer

	return 0;
}