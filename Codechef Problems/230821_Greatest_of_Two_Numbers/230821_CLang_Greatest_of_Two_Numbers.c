/*
#include<stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if(a > b)
        printf("%d is greater than %d", a, b);
    else
        printf("%d is greater than %d", b, a);
    return 0;
}
*/

/*
#include<stdio.h>

int main()
{
    int quantity, price = 100;
    float totalCost, totalAfterDiscount;

    scanf("%d", &quantity);
    totalCost = quantity * price;

    if (totalCost >= 1000)
    {
        totalAfterDiscount = totalCost - (totalCost * 0.1);
        printf("%.2f", totalAfterDiscount);
    }
    else
    {
        printf("%.2f", totalCost);
    }

    return 0;
}
*/

/*
#include<stdio.h>

int main()
{
    int salary, yearsOfExp;
    float bonusPercent = 0.05, netBonus;

    scanf("%d %d", &salary, &yearsOfExp);

    if (yearsOfExp > 5)
    {
        netBonus = salary * bonusPercent;
        printf("%.2f is the net bonus amount", netBonus);
    }
    else
    {
        printf("You're yet to complete 5 years in this organization");
    }

    return 0; 
}
*/

/*
#include  <stdio.h>
int main ()
 {
   int a,b,c;
   printf("\nType the ages of a,b,c:");
   //correct format of scanf
   scanf("%d %d %d",&a,&b,&c);
   if ((a>b) && (a>c))
   {
       printf("\nThe biggest age is A");
   }
   else
   {
       printf("\nThe lesser age is A");
   }
   //(b>a) && (b>c)
   if ((b>a) && (b>c))
   {
       printf("\nThe biggest age is B");
   }
   else
   {
       printf("\nThe lesser age is B");
   }
   if ((c>a) && (c>a))
   {
       printf("\nThe biggest age is C");
   }
   else
   {
       printf("\nThe lesser age is C");
   }
   return 0;
 }
 */

/*
#include<stdio.h>

int main()
{
    int x = 2, y = 5, z = 0;
    printf("%d\n", x == 2);
    printf("%d\n", x != 5);
    printf("%d\n", (x != 5 && y >= 5));
    printf("%d\n", (z != 0 || x == 2));
    printf("%d\n", !(y < 10));
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
  int num_of_held,num_of_atten;
  char medicalReason;
  printf("Total number of classes held and attended?\n");
  scanf("%d %d",&num_of_held, &num_of_atten);
//   printf("Any Medical Reason?\n");
  scanf(" %c", &medicalReason);
//   printf("%c", medicalReason);
  float per = (num_of_atten/(float)num_of_held)*100;
  printf("You have attended %f of total classes\n",per);
  
  if(per>=75)
  {
    printf("Yes, you are allowed\n");
  }
  else if(per<75 && (medicalReason == 'Y' || medicalReason =='y'))
  {
    printf("Yes, you are allowed\n");
  }
  else
  {
    printf("No\n");
  }
  return 0;
}
*/

/*
#include <stdio.h>
  
int main()
{
  
    // Declare the variables
    int num;
    char ch;
    float f;
  
    // --- Integer ---
  
    // Input the integer
    printf("Enter the integer: ");
    scanf("%d", &num);
  
    // Output the integer
    printf("\nEntered integer is: %d", num);
  
    // --- Float ---
  
    // Input the float
    printf("\n\nEnter the float: ");
    scanf("%f", &f);
  
    // Output the float
    printf("\nEntered float is: %f", f);
  
    // --- Character ---
  
    // Input the Character
    printf("\n\nEnter the Character: ");
    scanf(" %c", &ch);
  
    // Output the Character
    printf("\nEntered integer is: %c", ch);
  
    return 0;
}
*/