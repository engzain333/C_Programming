
 ***********************   (1) calculate avarage of degrees for any given student number by // while     ************************

#include <stdio.h>
#include <string.h>
#include "Types.h"




	int main ()
{
	int i=0;
	float  degree;
	
    float sum=0;
	int num;
	float avg ;
	printf("enter number of students : ");
	scanf("%d",&num);
	
	
	while(i<num)
	{
		printf("student (%d) degree = ",i+1);
		scanf(" %f",&degree);
		
		sum+=degree;
		i++;
	}
	avg=sum/num;
	    printf("the avg = %f",avg);
	
	
}


-----------------------------------------------------------------------------------------------------------------

 ***********************   (2) calculate avarage of degrees for any given student number by // for     ************************


#include <string.h>
#include "Types.h"


int main ()
{
	int i=0;
	float  degree;
	int x,y;
    float sum=0;
	int num;
	float avg ;
	printf("enter number of stufents : ");
	scanf("%d",&num);
	
	

    for(i=1;i<=num;i++)
	{
		printf("enter student (%d) degree : \n",i);
		scanf("%f",&degree);
		
		sum+=degree;
	}
    avg=sum/num;
	
	printf("the avg = %f",avg);
	
	
	
}


-------------------------------------------------------------------------------------------------

 ***********************   (3) calculate area and circumference of circle    ************************

#include <stdio.h>
#include <string.h>
#include "Types.h"


int main ()
{
	int i , r;
	char choice;
	int sum=0;
	int area , circumference;
	
	printf("enter circuit radios : ");
	scanf("%d",&r);
	
	printf("enter your choice ( a to print area , c to print circumference : \n");
	scanf(" %c",&choice);
	
	if( choice =='a')
		
	{
		area = 3.14*r*r;
		printf("the area is : %d\n",area);
	}
	
	else if ( choice =='c')
	{
		circumference=2*r*3.14;
		printf("the circumference is : %d\n",circumference);
	}
	else 
		printf("wrong choice ");
	
}


-------------------------------------------------------------------------------------------------

 ******************************         comparing 3 numbers   **********************************


#include <stdio.h>

int main ()
{
int a,b,c;

printf("enter 3 numbers : ");
scanf("%d%d%d",&a,&b,&c);

    if (a>b)
	{
		if (a>c)
			printf(" the largest value is : %d",a);
		else
		printf(" the largest value is : %d",c);
		
	}
	 else 
	 {
		 if( (b>c))
	{
			printf(" the largest value is : %d",b);
			
	}
	else 
		printf(" the largest value is : %d",c);

	 }


}





-------------------------------------------------------------------------------------------------

 ******** use scanf() to accept the name as input from the user and then print it  *******

#include <stdio.h>
  
int main()
{
   
  char name[20];
  
  printf("enter your name : ");
  scanf("%s",name);
  
  
  printf("your name is : %s ", name );
	
    return 0;
}


  ----------------------------------------------------------------------------------------------------------------------


**************   (ok)  program for Multiply two numbers and check answer true or false     *******************
                          //if entering more than 3 times the prog will exit 


#include <stdio.h>
  
int main()
{
  int x ;
  int f = 0;  
   
  printf("enter answer of 4*3 = ");
  scanf("%d",&x);
   
   while(x!=12 && f<3 )
   {
	   printf("wrong chois\n ");
	   printf("enter answer of 4*3 = \n");
	   scanf("%d" ,&x);  
        f++;	   
   }
       if (f<3)
        {
          printf("thanks");
        }
        else
	      printf("entering many times ");
  
    return 0;
}


----------------------------------------------------------------------------------------------------------------------

*******************  (ok) program multiply table //  *******************************************


#include <stdio.h>
  
int main()
{
  int x ;
  int i=1 ;
  
   
  printf("Enter Number  ");
  scanf("%d",&x);
   
   while(i<=x)
	   
   {
	   printf("%d * %d = %d\n",x,i,x*i);  
           i++;	   
   }
      
  
    return 0;


------------------------------------------------------------------------------------------------------

*******************         (ok)        program factorial by while               *******************************************




#include <stdio.h>
  
int main()
{
  int x , i = 1 , f = 1 ;
  printf("Enter Number  ");
  scanf("%d",&x);
   
   while(i<=x )
	   
   {
	   
	   f*=i;
	   i++;	   
   }
      printf("fact = %d",f);
  
    return 0;
}


------------------------------------------------------------------------------------------------------

*******************     (ok)  program factorial by for loop and function         *************************




#include <stdio.h>
#include <string.h>

int factorial (int x );

int  main()
{
	
	printf(" the factorial of (%d) : %d\n" , 10,factorial(10));
	printf(" the factorial of (%d) : %d\n" , 4,factorial(4));
	printf(" the factorial of (%d) : %d\n" , 6,factorial(6));
	

}	
int factorial (int x )
{
	int f = 1;
	for (; x>0;x--)
	{
		f*=x;
	}
	return f;
	
}





------------------------------------------------------------------------------------------------------

*******************        (ok)         program factorial by for loop               *************************

int main()
{
	int x ;
  int f=1 ;
  int i;


    printf("num to factorial :  ");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		f*=i;
	
	}	
	printf("factorial of (%d) =  %d",x,f);
  
  
}  
  


------------------------------------------------------------------------------------------------------

*******************          (ok)       program to make calculator                *******************************************



#include <stdio.h>
int main()
{
  int num1 , num2 , result ; 
  char op , choice ; 
  
   for(;;)
  {
  printf(" Enter Tow Number And Operation To Calculate :  ");
  scanf("%d %d %c",&num1,&num2,&op);

	  switch(op)
	  {
		case '+': result=num1+num2; break;  
		case '-': result=num1-num2; break;  
		case '*': result=num1*num2; break; 
		case '/': result=num1/num2; break; 
		  
	  }
	  printf(" The Resulte is : %d \n Enter any key except C character to Repeat ", result );
	  scanf(" %c",&choice);
	  if (choice=='c')
		  break;
	  
	   
  }


------------------------------------------------------------------------------------------------------
  
*******************                 program to max value of 2 values by functions                 *******************************************
 



#include <stdio.h>
  
  
int GET_MAX(int x , int y );
  
int main()
{
	int x , y ;
	printf("Enter the value 1 : ");
	scanf("%d",&x);
	printf("Enter the value 2 : ");
	scanf(" %d",&y);
	
	int max = GET_MAX(10,20);
		printf("the maximum value is : %d ", max );
		
	
}
int GET_MAX(int x , int y )
{
	if(x>y)
		return x ;
	else 
		return y ;
}	
	



------------------------------------------------------------------------------------------------------
  
*******************                 factorial by recursion                  *******************************************
 
#include <stdio.h>
  
  
int GET_FACT(int number);
  
int main()


{
	
	int fact = GET_FACT(4);

    printf("fact = %d",fact);
	
	return 0;
	
	
}

int GET_FACT(int number  )
{
	if(number==0)
		
		return 1;
		
	else
		
		return number * GET_FACT(number-1);

}



------------------------------------------------------------------------------------------------------
  
*******************                 print address of array                   *******************************************

#include <stdio.h>
  
  

  
int main()


{
	int arr [3]={1,2,3};
	printf("adress of arr = %p",arr);
	
}





------------------------------------------------------------------------------------------------------
  
*******************   program of entering 10 values and print them in reverse by for loop   ************************

	
#include <stdio.h>

nt main()
{
	int i ;
	int x [10] ;
	for(i=0;i<10;i++)
	{
		printf("Please Enter Number %d : ",i);
		scanf("%d",&x[i]);
		
	}
	printf("the values in reversed order \n");
	for(i=9;i>=0;i--)
	{
		printf("%d\n",x[i]);
	}
	
}


------------------------------------------------------------------------------------------------------
  
*******************   program of sorting    ************************


	


#include <stdio.h>

int  main()
{
	int i ,j ,t ;
	
	int x [5]={3,7,4,8,2}; 
	for(j=0;j<4;j++)
	{
		for(i=0;i<4-j;i++)  // to escape etiration 
	  {
		if (x[i]>x[i+1])
		{
			t=x[i];
			x[i]=x[i+1];
			x[i+1]=t;
		}
			
	  }
		
	}
	for(i=0;i<5;i++)
	printf("%d\n",x[i]);
	
}


	
------------------------------------------------------------------------------------------------------
  
*******************   program of store 10 student degree and print them ************************


#include <stdio.h>

int  main()
{
	int arr [10];
	int i ;
	
	for(i=0;i<10;i++)
	  {
		printf("Enter Student %d Degree =  \n",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr[i]);
	  }
	for(i=0;i<10;i++)
	  {
		printf("Student %d Degree is = %d\n",i+1,arr[i]);
		
	  }
	
	
}


------------------------------------------------------------------------------------------------------
  
*******************   program of transpose of matrix  3*3    ************************





#include <stdio.h>

int  main()
{
	int r,c;
	int arr [3][3];

	
	
	for(r=0;r<3;r++)
	  {
		  
		  for(c=0;c<3;c++)
		  {
			  
		     printf("Enter item (%d,%d) :  \n",r,c);
		     fflush(stdin); fflush(stdout);
		     scanf("%d",&arr[r][c]);
     	  }
		  
	  }
		  
		  printf("the matrix is \n");
	        for(r=0;r<3;r++)
	          {
		  
		        for(c=0;c<3;c++)
				{
					printf("%d\t",arr[r][c]);
				}
				printf("\n");
			  }
			  
			  printf("the transpose  is \n");
			  
					for(r=0;r<3;r++)
	          {
		  
		        for(c=0;c<3;c++)
				{
					printf("%d\t",arr[c][r]);
				}
				printf("\n");
			  }
	
}


	

------------------------------------------------------------------------------------------------------
  
*******************   program copy string to string  ************************


#include <stdio.h>

int  main()
{
	int i=0;
	 char a [20]="ahmed ali";
	 char b [20];
	 
	 while(a[i]!=0)
	 {
		 b[i]=a[i];
		 i++;
		 
	 }
       	b[i]=0;
		
		printf("name of array b = %s",b);
}	
	

------------------------------------------------------------------------------------------------------
  
*******************   program adding string to string   ************************

#include <stdio.h>
#include <string.h>

int  main()
{
	
	int i,j;
	char a[20];
	char b[20];
	printf("enter your first name :");
	gets(a);

	printf("enter your second name :");
	gets(b);
	
	for(i=0;a[i]!='\0';i++);

	for(j=0;b[j]!='\0';i++,j++)
	{
		a[i]=b[j];
	}
		a[i]='\0';
		
	printf(" your  name is : %s",a);
	
	
	
}	
	

------------------------------------------------------------------------------------------------------
  
*******************   program calculate min values of elements of arrays   ************************




#include <stdio.h>
#include <string.h>


int CalcMin(int arr [],int n );

int  main()
{
	
        int x_arr [10]={18,15,17,12,11,13,14,16,20,19};  
        int y_arr [10]={28,25,27,22,21,23,24,26,30,29};  
        int z_arr [10]={48,45,47,42,41,43,44,46,50,49};  

        printf("the min value of x , y , z is %d %d %d",CalcMin(x_arr,10),CalcMin(y_arr,10),CalcMin(z_arr,10));	


}
       int CalcMin(int arr [],int n )
	   {
                   int i =0;
                   int minval=arr[0];

		   for(i=0;i<n;i++)
		   {
			   if(arr[i]<minval)
			   minval=arr[i];
		   }

		   return minval;
	   }
	   

 
------------------------------------------------------------------------------------------------------
  
*******************   program to Passing the Structure Members as an Argument to afunction then print them   ************************


#include <stdio.h>
#include <string.h>
#include "Types.h"


void print(char name[],int age,int roll_no , float mark )
{
	printf("%s %d %d %2f",name,age,roll_no,mark);
	
}
 struct student
 {
	char name[50] ;
	int age       ; 
	int roll_no   ;  
	float mark    ;  
 };
 
int  main()
{
	struct student s1 = {"zain",22,30,75.5};
	
	print(s1.name,s1.age,s1.roll_no,s1.mark);
}



------------------------------------------------------------------------------------------------------
  
*******************   degrees of 10 students in math , english , physics , chemics    ************************




#include <stdio.h>
#include <string.h>
#include <conio.h>
#include"Types.h"



typedef struct 
{
	uint8  math ;
	uint8  english ;
	uint8  physics ;
	uint8  chemics ;
	
} degree;


int main ()
{
	degree arr[10];
	uint8 i;
	uint8 id;
	for(i=0;i<10;i++)
	{
		
		
		arr[i].math   = i*2+10;
		arr[i].english= i*3+10;
		arr[i].physics= i*2+17;
		arr[i].chemics= i*3+15;
		
		
	}
	
	printf("enter student ID : ");
	scanf("%u",&id);
	id--;
	if(id<=9)
	{
      printf("math degree is : %d\n",arr[id].math);  
      printf("english degree is : %d\n",arr[id].english);  
      printf("physics degree is : %d\n",arr[id].physics);  
      printf("chemics degree is : %d\n",arr[id].chemics);  

	}
	else
		
	
	printf("\nwrong id ");
	
	
}


------------------------------------------------------------------------------------------------------
  
*******************       ************************


-----------------------------------------------------------------------------------------------------------------

 (ZZZ)  ***********************    calculate polynomial value by getche() and do while     ************************ 


#include <stdio.h>
#include <string.h>
#include <conio.h>



int main ()
{
	
	float  x,y;
	
    do
	{
		printf("\n the x value is : ");
		scanf("%f",&x);
		
		y = 5*x*x + 3*x + 2;
		
		printf("\n y (%f) =  %f",x,y);
		
		printf("\n do you want to evaluate again ( y , n ): \n");
	}
	while(getche()=='y');
	
	
}


(ZZZ)  ***********************    calculate polynomial value by getche() and do while        ************************ 



int main ()
{

	int i;
	float y;
	float x[5]={5,16,22,3.5,15};
	
	for(i=0;i<5;i++)
	{
		 y =  5 * x[i] * x[i]  + 3 * x[i] + 2;
		
		printf("\n y(%f) = %f",x[i],y);
		
	}
	
	
	
	
	
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################
###########################################################################################################################################################################################################################################################################################################


  
