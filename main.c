/*
#include <stdio.h>
#include <string.h>
struct std{
  int age;
  char name[20];
}s1;

typedef struct city{
  char nm[30];
  int pop;
}st;//st is a structure of type city with fields like nm and pop
int main(void) {
  struct std s2 = {15,"randomName"};
  //struct std s3 = {90,"souraMandal"};
  struct std s3;

  
  //s3.name = "soura Mandal";--> gives an error
  
  strcpy(s3.name,"lion");
  st c1 = {"earth",10};
  

  printf("%s",c1.nm);
  return 0;
}
*/
/*
#include <stdio.h>
typedef struct student{
   char name[30],usn[10];
   int marks;
}st;
int main(){
  int num,sum = 0,avg;
  printf("Enter the number of students: ");
  scanf("%d",&num);
  st s[num];

  for(int i=0;i<num;i++){
    printf("Enter the name of Student %d: ",i+1);
    scanf("%s",s[i].name);
    printf("Enter the USN of Student %d: ",i+1);
    scanf("%s",s[i].usn);
    printf("Enter the total marks of Student %d: ",i+1);
    scanf("%d",&s[i].marks);
    sum += s[i].marks;
  }
  avg = sum/num;
  printf("List of students having scored more than average marks: \n");
  printf("NAME\tUSN\tMARKS\n");
  for(int i=0;i<num;i++)
    if(s[i].marks > avg)
       printf("%s\t%s\t%d\n",s[i].name,s[i].usn,s[i].marks);
  

  printf("List of Students having scored less than average: ");
  printf("NAME\tUSN\tMARKS\n");
  for(int i=0;i<num;i++)
    if(s[i].marks < avg)
      printf("%s\t%s\t%d\n",s[i].name,s[i].usn,s[i].marks);


return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
  FILE *p1,*p2;
  char curr,fl1[30],fl2[30];
  printf("Enter the file name: ");
  scanf("%s",fl1);
  p1 = fopen(fl1,"r");
  if(p1 == NULL){
     exit(0);
 }
  printf("Enter the new file name: ");
  scanf("%s",fl2);
  p2 = fopen(fl2,"w");
  while(curr!=EOF){
    curr = getc(p1);
    putc(curr,p2);
  }
  //curr = getc(p1);
  //printf("%c",curr);
  //curr = '/0';
  //putc(curr,p2);
fclose(p1);
fclose(p2);
  return 0;
}*/

#include <stdio.h>
void main(){
  char arr[20][30];
  printf("Enter the string 1: ");
  fgets(arr[1],30,stdin);
  printf("Enter the string two: ");
  fgets(arr[2],30,stdin);
  fputs(arr[1],stdout);
  fputs(arr[2],stdout);
}