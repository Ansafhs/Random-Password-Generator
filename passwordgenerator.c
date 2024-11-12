#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void Generatepassword(int a)
{
 int i,ix,chsize;
 char chset[]="abcdfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*!@#$%^&*";
 chsize=strlen(chset)-1;
 srand(time(NULL));
 printf("\nGenerated Password: ");
 for(i=0;i<a;i++)
 {
  ix=rand()%chsize;
  printf("%c",chset[ix]);
 }
 printf("\n\n");
}

int main()
{
 printf("\n\nRANDOM PASSWORD GENERATOR\n-------------------------\n");
 int l;
 printf("Enter the length of password: ");
 scanf("%d",&l);
 Generatepassword(l);
 return 0;
}
