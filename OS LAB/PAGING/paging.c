#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int size,m,n,pgno,pagetable[3]={5,6,7},i,j,frameno;
  double m1;
  int ra=0,ofs;
  clrscr();
  printf(“Enter process size (in KB of max 12KB):”);
  scanf(“%d”,&size);
  m1=size/4;
  n=ceil(m1);
  printf(“Total No. of pages: %d”,n);
  printf(“\nEnter relative address (in hexadecimal notation eg.0XRA) \n”);
  scanf(“%d”,&ra);
  pgno=ra/1000;
  ofs=ra%1000;
  printf(“page no=%d\n”,pgno);
  printf(“page table”);
  for(i=0;i<n;i++)
  printf(“\n %d [%d]”,i,pagetable[i]);
  frameno=pagetable[pgno];
  printf(“\n Equivalent physical address : %d%d”,frameno,ofs);
  getch();
}