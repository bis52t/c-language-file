#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int maiin(){
struct student s1;
s1. roll = 18383;
s1. cgpa = 8.8;
strcpy(s1.name,"dev");
printf("student name =%s\n",s1.name);
printf("student roll no =%d",s1.roll);
printf("student cgpa =%f",s1.cgpa);

struct student s2;
s2.roll =1134;
s2.cgpa = 8.6;
strcpy(s2.name,"arun");
printf("student name=%s\n",s2.name);
printf("student roll no =%d\n",s2.roll);
printf("student cgpa =%f\n",s2.cgpa);

struct student s3;
s3.roll  =2123;
s3.cgpa =7.9;
strcpy(s3.name,"ayush");
printf("stdent name =%s\n",s3.name);
printf("studnet roll no =%d\n",s3.roll);
printf("student cgpa =%f\n",s3.cgpa);
return 0;
}
