#include<stdio.h>
void rotate(int a[50],int n, int d, int cr ) {
 int i,j=0,temp;
 char l,r;
 if(d==1)
 {
 while(j<cr)
 {
 temp=a[0];
 for(i=0;i<n;i++) 
 a[i]=a[i+1];
 a[n-1]=temp;
 j+=1;
 }
 }
 if(d==2)
 {
 while(j<cr)
 {
 temp=a[n-1];
 for(i=n-1;i>0;i--)
 a[i]=a[i-1];
 a[0]=temp;
 j+=1;
 }
 }
 printf("rotated array is\n");
 for(i=0;i<n;i++)
 printf("%3d",a[i]); }
void main() {
 int a[50],n,cr,i;
 char d;
 printf("enter no of elements\n");
 scanf("%d",&n);
 printf("enter elements\n");
 for(i=0;i<n;i++)
 scanf("%3d",&a[i]);
 printf("direction of rotation\n");
 scanf("%d",&d);
 printf("no of rotation\n");
 scanf("%d",&cr);
 rotate(a,n,d,cr);
}