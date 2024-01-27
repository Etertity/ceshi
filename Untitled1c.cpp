/*#include<stdio.h>
int main()
{
	printf("*************\n");
	printf("Hello world\n");
	printf("*************\n");
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	printf("This is a C program.\n");
	return 0;
}*/

/*#include<stdio.h>
int main()
{   printf("****\n");
    printf("*\n");
    printf("*\n");
    printf("*\n");
    printf("****");
    return 0;
}*/

/*#include<stdio.h>
int  main()
{ int score;
  char grade;
  scanf("%d",&score);
  if(score>=90&&score<=100)
   grade='A';
  else if(score>=80)
   grade='B';
  else if(score>=70)
   grade='C';
  else if(score>=60)
   grade='D';
  else if(score>=0)
   grade='E';
   printf("\n");
   if(score>=0&&score<=100)
     printf("%d %c",&score,&grade);
   else
     printf("ERROR");
return 0; 
    
    
}*/ 

/*#include<stdio.h>
int main()
{
	char ch;
	ch=getchar();
	switch(ch)
	{
	  case 'A':
	  case 'a':printf("America\n");
	           break;
	  case 'B':
	  case 'b':printf("Britain\n");
	           break;
	  case 'C':
	  case 'c':printf("China\n");
	           break;
	  default:printf("Country\n");         
	 } 
	return 0;
}*/
	
/*#include<stdio.h>
int main()
{ 
  char ch;
  ch=getchar();
  if(ch=='a'||ch=='A')
   printf("America");
  else if(ch=='b'||ch=='B')
   printf("Britian"); 
  else if(ch=='c'||ch=='C')
   printf("China");
  else
   printf("Country");
  return 0;	
}*/

/*Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="bit";
	char arr2[]="########";
	strcpy(arr2,arr1);
	printf("%s\n",arr2);
	return 0;
}*/

/*#include<string.h>
#include<stdio.h>
int main()
{
	char arr[]="hello world";
	memset(arr,'*',5);
	printf("%s\n",arr);
	return 0;
}*/

/*#include<stdio.h>
int get_max(int x,int y)
{
	if(x>y)
	 return x;
	else 
	  return y;
}
int main()
{
	int a=10;
	int b=20;
	int max=get_max(a,b);
	printf("max=%d\n",max);
	return 0;
}*/

/*int main()
{
	int a=10;
	int* p =&a;
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	0printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(int*));
	printf("%d\n",sizeof(double*));
	return 0;*/
	/*int a = 0x11223344;
	int* pa= &a;
	char*pc= &a;
	printf("%p\n",pa);
	printf("%p\n",pc);
	
	return 0;
}*/

/*#include<stdio.h>
#include<string.h> 
int main()
{
	char arr1[30] ="abc";
	char arr2[] = "def";
	strcat(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int is_left_move(char* str1,char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if(len1 !=len2)
	  return 0;
	  strncat(str1,str2,6);
	  char* ret =strstr(str1,str2);
	  if(ret == NULL)
	  {
	  	return 0;
	   } 
       else
       {
         return 1;	   
	   }
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[]="cdef";
	int ret=is_left_move(arr1,arr2);
	if(ret==1)
	{printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}*/
#include<stdio.h>
int main()
{
	printf("%d/n",sizeof(char));
	printf("%d/n",sizeof(short));
	printf("%d/n",sizeof(int));
	printf("%d/n",sizeof(long));
	printf("%d/n",sizeof(long long));
	printf("%d/n",sizeof(float));
	printf("%d/n",sizeof(double));
	return 0;
 } 
