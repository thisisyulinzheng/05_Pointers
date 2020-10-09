#include <stdio.h>
int main() {
	// 1
	char c = 'c';
	int i = 13;
	long l = 10000;

	// 2
	printf("Part 1 & 2\n");
	printf("&c in decimal: %d \n", &c);
	printf("&c in hex: %p \n", &c);

	printf("&i in decimal: %lu \n", &i);
	printf("&i in hex: %p \n", &i);

	printf("&p in decimal: %lu \n", &l);
	printf("&p in hex: %p \n", &l);
	printf("\n"); 

	//3
	char *cp = &c;
	int *ip = &i;
	long *lp = &l;

	//4
	printf("Part 3 & 4\n");
	printf("*cp: %p \n", cp);
	printf("*ip: %p \n", ip);
	printf("*lp: %p \n", lp);
	printf("\n"); 

	//5
	printf("Part 5\n");
	printf("Original Value of c: %c \n", c);
	printf("Original Value of i: %d \n", i);
	printf("Original Value of l: %ld \n", l);
	printf("\n"); 

	*cp = 'z';
	*ip = 67;
	*lp = 2345678;

	printf("Changed Value of c: %c \n", c);
	printf("Changed  Value of i: %d \n", i);
	printf("Changed Value of l: %ld \n", l);
	printf("\n");

	//6
	unsigned int u_i = 96;
	int *u_ip = &u_i;
	char *c_ip = &u_i;

	//7
	printf("Part 6 & 7\n");
	printf("u_ip: %p | u_ip points to: %d\n", u_ip, *u_ip);
	printf("c_ip: %p | c_ip points to: %c\n", c_ip, *c_ip);
	printf("\n");

	//8
	printf("Part 8\n");
	printf("unsigned int in decimal: %u\n", u_i);
	printf("unsigned int in hex: %x\n", u_i);
	printf("\n");

	//9
	printf("Part 9\n");
	int ct;
	for (ct = 0; ct < 4; ct++) {
		printf("Byte %d in decimal: %hhu | in hex: %hhx \n", ct, *(c_ip+ct), *(c_ip+ct));
	}

	printf("\n");

	//10
	
	printf("Part 10\n");
	for(ct = 0; ct < 4; ct++) {
        *(c_ip + ct) += 1;
        printf("Byte %d incremented by 1, in decimal: %hhu | in hex:%hhx\n", ct, *(c_ip+ct), *(c_ip+ct));
    }
	printf("\n");

	//11
	
	printf("Part 11\n");
	for(ct = 0; ct < 4; ct++) {
       *(c_ip + ct) += 16;
       printf("Byte %d incremented by 16, in decimal: %hhu | in hex:%hhx\n", ct, *(c_ip+ct), *(c_ip+ct));
    }	
	printf("\n");
	printf("\n");

	return 0;
}