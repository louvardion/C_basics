#include <stdio.h>
#include "Poligonos.h"

int main (int argc, char *argv[]){
    
    int decision;
    float a, b, c, B, h, r;

         puts("==========PERIMETER AND AREA CALCULUS==========");
         puts("What are we calculating today? (number)");
         puts("\n=> 1. Perimeter of a Rectangle.");
         puts("=> 2. Perimeter of a triangle.");
         puts("=> 3. Perimeter of a square.");
         puts("=> 4. Area of a Rectangle.");
         puts("=> 5. Area of a Triangle.");
         puts("=> 6. Area of a Square.");
         puts("=> 7. Area of a Circle.");
         puts("=> 8. Area of a Trapezium.");
         puts("=> 9. Area of a diamond.\n");
         puts("===============================================");
         printf("Decision: ");
         scanf("%d", &decision);
         while (getchar() != '\n');
         
         
         switch (decision){
                
                case 1:
                     puts("Please input the base value.");
                                  scanf("%f", &a);
                                  while (getchar() != '\n');
                     puts("Please input the side value.");
                                  scanf("%f", &b);
                                  while (getchar() != '\n');
                     puts("===============================================");
                     printf("Result: %.2f\n", calPeriRect(a, b));
                     puts("===============================================");
                          
                break;
                
                case 2:
                     puts("Please input the base value.");
                                  scanf("%f", &a);
                                  while (getchar() != '\n');
                     puts("Please input the first side value.");
                                  scanf("%f", &b);
                                  while (getchar() != '\n');
                     puts("Please input the second side value.");
                                  scanf("%f", &c);
                                  while (getchar() != '\n');
                     puts("===============================================");
                     printf("Result: %.2f\n", calPeriTrian(a, b, c));
                     puts("===============================================");     
                
                break;
                
                case 3:
                     puts("Please input the side value.");
                                  scanf("%f", &a);
                                  while (getchar() != '\n');
                     puts("===============================================");
                     printf("Result: %.2f\n", calPeriQuadr(a));
                     puts("==============================================="); 
                          
                break;
                
                case 4:
                     puts("Please input the base value.");
                                  scanf("%f", &b);
                                  while (getchar() != '\n');
                     puts("Please input the height value.");
                                  scanf("%f", &h);
                                  while (getchar() != '\n');
                     puts("===============================================");
                     printf("Result: %.2f\n", calAreaRect(b, h));
                     puts("===============================================");
                          
                break;
                
                case 5:
                     puts("Please input the base value.");
                                  scanf("%f", &b);
                                  while (getchar() != '\n');
                     puts("Please input the height value.");
                                  scanf("%f", &h);
                                  while (getchar() != '\n');
                     puts("===============================================");
                     printf("Result: %.2f\n", calAreaTrian(b, h));
                     puts("===============================================");
                          
                break;
                
                case 6:
                     puts("Please input the base value.");
                                  scanf("%f", &a);
                                  while (getchar() != '\n');
                     puts("===============================================");
                     printf("Result: %.2f\n", calAreaQuadr(a));
                     puts("===============================================");
                     
                          
                break;
                
                case 7:
                     puts("Please input radius value.");
                                  scanf("%f", &r);
                                  while (getchar() != '\n');
                     puts("===============================================");
                     printf("Result: %.2f\n", calAreaCirc(r));
                     puts("===============================================");
                          
                break;
                
                case 8:
                     puts("Please input the smallest base value.");
                                  scanf("%f", &b);
                                  while (getchar() != '\n');
                     puts("Please input the largest base value.");
                                  scanf("%f", &B);
                                  while (getchar() != '\n');
                     puts("Please input the height value.");
                                  scanf("%f", &h);
                                  while (getchar() != '\n');
                     puts("===============================================");
                     printf("Result: %.2f\n", calAreaTrap(b, B, h));
                     puts("===============================================");
                
                break;
                
                case 9:
                     puts("Please input the height value.");
                                  scanf("%f", &a);
                                  while (getchar() != '\n');
                     puts("Please input the length value.");
                                  scanf("%f", &b);
                                  while (getchar() != '\n');
                     puts("===============================================");
                     printf("Result: %.2f\n", calAreaLosa(a, b));
                     puts("===============================================");
                break;
                
                default:
                        puts("Invalid Selection. Please select a number from the options.");                  
         }
         
         puts("\n\nPress 'Enter' to exit.");
         getchar();

     return 0;
}
