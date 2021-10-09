#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void mergeSort(int a[MAX], int x, int y);
void mergeArray(int a[MAX], int x1, int y1, int x2, int y2);
int n,count=1;
void mergeSort(int a[MAX], int x, int y){
    printf("%d: ",count++);
    for(int i=0; i<n;i++)
       printf("%d ",a[i]);
    printf("\n");
    int m;
    if(x<y){
      m =(x+y)/2;
      mergeSort(a,x,m);
      mergeSort(a,m+1,y);
      mergeArray(a,x,m,m+1,y);
    }
}
/*
void mergeArray(int a[MAX],int x1,int y1, int x2, int y2){
    int temp[MAX];
    int i=x1, j=x2, k=0;
    while(i<=y1 && j<=y2){
         if(a[i]<a[j])
            temp[k++]=a[i++];
         else
            temp[k++]=a[j++];
    }
    while(i<=y1)
         temp[k++]=a[i++];
    while(j<=y2)
         temp[k++]=a[j++];
    for(i=x1, j=0; i<=y2;i++,j++)
    a[i]=temp[j];
}
*/
void mergeArray(int a[MAX],int x1,int y1, int x2, int y2){
    int temp[MAX];
    int i=x1, j=x2, k=0;
    while(i<=y1 && j<=y2){
         if(a[i]>a[j])
            temp[k++]=a[i++];
         else
            temp[k++]=a[j++];
    }
    while(i<=y1)
         temp[k++]=a[i++];
    while(j<=y2)
         temp[k++]=a[j++];
    for(i=x1, j=0; i<=y2;i++,j++)
    a[i]=temp[j];
}
void printArray(int a[MAX],int b, int c){
    for(int i=0;i<c;i++)
       printf("%d ",a[i]);
    }

int main(){
    int a[MAX],i;
    scanf("%d",&n);
    if(n<=0 || n>MAX){
      printf("ERROR");
      exit(1);
    }
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("Original: ");
    printArray(a,0,n);
    printf("\n");
    mergeSort(a,0,n-1);
    printf("Sorted: ");
    printArray(a,0,n);
    return 0;
 }
      
     

        