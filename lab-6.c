#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int 1
struct profile{
char name[8];
int age;
}student[8];

for(i=0;i<10;i++)
{
  printf("Student[%d]\n",i);
  printf("\t Name:");
  scanf(student[i].name);
  printf("\t Age:");
  scanf(student[i].age);
};

for(i=0;i<10;i++)
{
  if(student[i].age>20)
    printf("\n%s%d",student[i].name,student[i].age);
}
return 0;
}
