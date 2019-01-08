/*
 * exa2.c
 *
 *  Created on: 08-Jan-2019
 *      Author: student
 */
#include "mpi.h"
#include <stdio.h>
int isprime(int a){
	int i;
	if((a==1)||(a==2))
		return 1;
	for(i=2;i<a;i++)
		if(a%i==0)
			return 0;
	return 1;

}
int main(int argc,char *argv[])
{
	int rank,size,i;
	MPI_Init(&argc,&argv);
	MPI_Comm_rank(MPI_COMM_WORLD,&rank);
	MPI_Comm_size(MPI_COMM_WORLD,&size);
	if(rank==0){
		for(i=1;i<50;i++)
			if(isprime(i)==1)
				printf("%d Rank:%d\n",i,rank);
	}
	else
		for(i=50;i<=100;i++)
				if(isprime(i)==1)
					printf("%d Rank:%d\n",i,rank);

	MPI_Finalize();
	return 0;
}


