/*
 * Factorial.cpp
 */

#include "Factorial.h"

int factorialRecurs(int n)
{
	if(n <= 1){
		return 1;
	}
	else return n*factorialRecurs(n-1);
}

int factorialDinam(int n)
{
	static int mem[100] = {1,1};
	for (int i = 1; i <= n;i++){
		if(mem[i] == 0){
			mem[i] = mem[i-1]*i;
		}
	}
	return mem[n];
}
