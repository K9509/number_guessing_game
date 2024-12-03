#include<stdio.h>
#include<math.h>
double division(double a,double b)
{
    if(b==0)
    {
        fprintf(stderr,"Invalied argument for division");
        return NAN;
    }
    else
    {
        return a/b;
    }
}
double modulus(int a, int b)
{
     if(b==0)
    {
        fprintf(stderr,"Invalied argument for modulus");
        return NAN;
    }
    else
    {
        return a%b;
    }
}
void print_menu()
{
    printf("\n\n-------------------------");
    printf("\nwelcome to simple calculatar \n");
    printf("\n1. Add");
    printf("\n2. subtract");
    printf("\n3. multiply");
    printf("\n4. divide");
    printf("\n5. modulus");
    printf("\n6. power");
    printf("\n7. Exit");
    printf("\nNow, enter your choice: ");
}
int main()
{
    int choice;
    double first,second,result;
    while(1)
    {
        print_menu();
        scanf("%d",&choice);
        if(choice==7)
        {
            break;
        }
        if(choice<1||choice>7)
        {
            fprintf(stderr,"Invalid menu choice");
            continue;
        }
        printf("\nPlease enter the first number: ");
        scanf("%lf",&first);
        printf("\nNow enter the second number: ");
        scanf("%lf",&second);
         switch (choice)
    {
    case 1: //Add
    result=first+second;
        break;
    case 2: //Subtract
    result=first-second;
        break;
    case 3: //Multiply
    result=first*second;
        break;
    case 4: //Divide
    result=division(first,second);
        break;
    case 5: //Modulous
    result=modulus(first,second);
        break;
    case 6: //power
    result=pow(first,second);
        break;
    }
    if(!isnan(result))
    {
        printf("\nresult of operation is : %.2f",result);
    }
    }
    return 0;
}
