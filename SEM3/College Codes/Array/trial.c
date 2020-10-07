#include<stdio.h>
#include<stdlib.h>
void reverse(int* , int);
void enterData(int* , int);
void delData(int* , int);
void traverse(int* , int);
int main()
{
 int n, ch;
 printf("Enter size of array: ");
 scanf("%d",&n);
 int arr[n]; // array initilization
 int i;
 printf("Enter data:\n");
 for(i=1; i<=n; i++)
 scanf("%d",&arr[i]);
 while(1) {
 printf("1.Insert Data\n");
 printf("2.Delete Data\n");
 printf("3.Reverse array\n");
 printf("4.Traverse\n");
 printf("5.Exit\n");
 printf("Enter your choice: ");
 scanf("%d",&ch);
 switch(ch){
 case 1:
 enterData(arr, n);
 break;
 case 2:
 delData(arr, n);
 break;
 case 3:
 reverse(arr, n);
 break;
 case 4:
 traverse(arr, n);
 break;
 case 5:
 exit(1);
 default:
 printf("Invalid choice!\n\n");
 }
 }
 return 0;
}
void enterData(int *arr, int n) {
 int pos, data,i;
 printf("Enter position to enter data: ");
 scanf("%d",&pos);
 printf("Enter data: ");
 scanf("%d",&data);
 arr[pos] = data;
 for(i=1; i<=n; i++)
 printf("%d ",arr[i]);
 printf("\n\n");
}
void delData(int *arr, int n) {
	int i;
 int pos;
 printf("Enter position to delete data from: ");
 scanf("%d",&pos);
 arr[pos] = 0;
 for(i=1; i<=n; i++)
 printf("%d ",arr[i]);
 printf("\n\n");
}
void reverse(int *arr, int n) {
	int i;
 printf("Reverse of the array is:\n");
 for (i=n; i>=1; i--)
 printf("%d ",arr[i]);
 printf("\n\n");
}
void traverse(int *arr, int n) {
	int i;
 for(i=1; i<=n; i++)
 printf("%d ",arr[i]);
 printf("\n\n");
}
