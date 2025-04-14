#include<stdio.h>
#include<string.h>
int main(){
    char firststr[100] = "hello";
    char secstr[] ="world";
    strcat(firststr,secstr);
    puts (firststr);
}