//Queue implementation
#include<stdio.h>
#define MAX 6
int intArray[MAX] = {4,6,3,2,1,9};
int front = 0;
int rear = -1;
int itemCount = 0;
int peek() {
   return intArray[front];
}
int isEmpty() {
   return itemCount == 0;
}
int isFull() {
   return itemCount == MAX;
}
int size() {
   return itemCount;
}
void insert(int data) {
   if(!isFull()) {
      if(rear == MAX-1) {
         rear = -1;
      }
      intArray[++rear] = data;
      itemCount++;
   }
}
int removeData() {
   int data = intArray[front++];
   if(front == MAX) {
      front = 0;
   }
   itemCount--;
   return data;
}
int main() {

   insert(3);
   insert(5);
   insert(9);
   insert(1);
   insert(12);

   int num = removeData();
   printf("Element removed: %d\n",num);

   insert(15);
   insert(17);
   insert(19);

   while(!isEmpty()) {
      int n = removeData();
      printf("Element removed: %d\n",n);
   }
   return 0;
}

