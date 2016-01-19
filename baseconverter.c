#include <stdio.h>
#include <math.h>

int base1,base2;
void base(){
   
   char array1[100], number1;
   int array2[100], i=-1,j;  
   long int num1=0, num2=0;

   printf("\nEnter number1 : ");
   scanf("%c", &number1);

   do{
       i++;
       scanf("%c", &array1[i]);
     } 
	 
   while(array1[i]!='\n');

   j=i-1;
   
   //Converts the base to 10.   
   for(i=j;i>=0;i--){                                                                                                                               
       
	   if(array1[i]<='9'&& array1[i]>='0'){
      
	  //Converting ascii code to num     
	   num1+=((long int)pow((float)base1,(j-i)))*(((int)array1[i])-48);                                      
     
	 }
       else if(array1[i]<='F'&&array1[i]>='A'){
       num1+=((long int)pow((float)base1,(j-i)))*(((int)array1[i])-55);
     }
       
	   else if(array1[i]<='f'&&array1[i]>='a'){
       num1+=((long int)pow((float)base1,(j-i)))*(((int)array1[i])-87);
     }
     
   }
   //Converts the from 10 to base2
   i=0;
   while(num1>=base2){ 
                                                                                                                             
       array2[i]=num1%base2;
       i++;
       num1/=base2;
     }

   array2[i]=num1;                                                                                                                             
   printf("\nNumber2 : ");

   for(;i>=0;i--){ 
       
	   //Prints the result.                                                                                                                                          
       if(array2[i]<=9&&array2[i]>=0){
       printf("%d",array2[i]);
       }

       else if(array2[i]>=10&&array2[i]<=16){
       printf("%c",(char)(array2[i]+55));
       }
     }
 }

 int main(){
   
   printf("\nGuide: You must enter Base1 & Base2 between 2 and 16\n");
   
   printf("\nEnter base1 : ");
   scanf("%d", &base1);

   printf("\nEnter base2 : ");
   scanf("%d", &base2);

   base();   
   
   getchar(); 
   
   return 0;

 }
