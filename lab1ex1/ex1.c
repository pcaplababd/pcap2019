/*
 * ex1.c

 *
 *  Created on: 08-Jan-2019
 *      Author: student
 */

#include <stdio.h>
int main()
{
	int m,n,p;
	printf("Enter dimensions m,n and p:");
	scanf("%d %d %d",&m,&n,&p);
	int a[m][n],b[n][p],i,j,k,c[m][p];
	printf("Input elements for matrix 1:");
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
	printf("Input elements for matrix 2:");
		for(i=0;i<n;i++)
			for(j=0;j<p;j++)
				scanf("%d",&b[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<p;j++)
			c[i][j]=0;
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			for(k=0;k<n;k++)
				c[i][j]+=a[i][k]*b[k][j];
		}
	}
	printf("Output:\n");
	for(i=0;i<m;i++){
		for(j=0;j<p;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
	return 0;
}
