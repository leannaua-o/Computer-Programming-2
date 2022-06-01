/*+ Write a program in C to calculate and print the Electricity bill of a given customer.
+ The customer ID., and Unit Consumed by the user should be inputted.
+ Print All Customer Data (Customer ID., Unit Consumed, Unit Charges, Surcharge, Customer Total Bill)*/


#include <stdio.h>
  
void main()
{  
   int id, cons;
   float charge, surchg=0, x, total;
   

   printf("Input Customer ID: ");
   scanf("%d",&id);
   printf("Input the unit consumed by the customer: ");
   scanf("%d",&cons);
   
   if (cons <199 ){
       
       charge = 1.50;
       
   }else if(cons>=250 && cons<400){
       
       charge = 1.60;
       
	}else if(cons>=450 && cons<600){
	    
	    charge = 1.85;
	    
	}else{
		charge = 2.00;
   x = cons*charge;
   if (x>400)
	surchg = x*.1;
   total = x+surchg;
   if (total < 100)
	total =100;
   printf("\n[Electricity Bill]\n");
   printf("Customer ID#                        :%d\n",id);
   printf("Unit Consumed                       :%d\n",cons);
   printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",charge,x);
   printf("Surchage Amount                     :%8.2f\n",surchg);
   printf("Total Customer Bill                 :%8.2f\n",total);
}  
    
}