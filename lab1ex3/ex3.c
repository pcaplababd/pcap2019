/*
 * ex3.c
 *
 *  Created on: 08-Jan-2019
 *      Author: student
 */

#include "mpi.h"
#include <stdio.h>
int main(int argc,char *argv[])
{
	int rank,size;
	int a,b;
	//printf("Enter two numbers:");
	a=10;
	b=5;
	MPI_Init(&argc,&argv);
	MPI_Comm_rank(MPI_COMM_WORLD,&rank);
	MPI_Comm_size(MPI_COMM_WORLD,&size);
	switch(rank){
	case 0:
		printf("Addition: %d Rank: %d\n",a+b,rank);
		break;
	case 1:
		printf("Subtraction: %d Rank: %d\n",a-b,rank);
		break;
	case 2:
		printf("Multiplication: %d Rank: %d\n",a*b,rank);
		break;
	case 3:
		printf("Division: %d\n Rank: %d",a/b,rank);
		break;
	case 4:
		printf("Modulo: %d Rank: %d\n",a%b,rank);
		break;
	}
	MPI_Finalize();
	return 0;
}

