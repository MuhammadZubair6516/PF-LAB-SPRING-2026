#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	double num1, num2, result;

	printf(" ....MENU.... \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Square of a number \n 6. Cube of a number \n 7. Square Root of a number \n 8. Power (x^y) \n 9. Absolute Value \n 10. Modulus (Remainder of two numbers) \n 11. Exit \n");
	do
	{
	printf(" SELECT:");
	scanf("%d" ,&a);
 
 switch(a)
{
	case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            if(num2 == 0)
                printf("Error! Division by zero is not allowed.\n");
            else
            {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            }
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = num1 * num1;
            printf("Square = %.2lf\n", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = num1 * num1 * num1;
            printf("Cube = %.2lf\n", result);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%lf", &num1);

            if(num1 < 0)
                printf("Error! Cannot take square root of negative number.\n");
            else
            {
                result = sqrt(num1);
                printf("Square Root = %.2lf\n", result);
            }
            break;

        case 8:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result = %.2lf\n", result);
            break;

        case 9:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = fabs(num1);
            printf("Absolute Value = %.2lf\n", result);
            break;

        case 10:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            if(num2 == 0)
                printf("Error! Modulus by zero is not allowed.\n");
            else
                 ; 
                printf("Remainder = %d\n", (int)num1 % (int)num2);
            break;

         case 11:
                printf("Exiting program... Thank you!\n");
                break;

            default:
                printf("Invalid choice! Please select 1 to 11.\n");
        }

    } while(a != 11);
    
} 




		
