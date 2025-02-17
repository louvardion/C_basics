#include <stdio.h>
#include "Poligonos.h"

int main (int argc, char *argv[]){
    
    int decision;
    
         puts("==========PERIMETER AND AREA CALCULUS==========");
         puts("What are we calculating today? (number)");
         puts("\n\n=> 1. Perimeter of a Rectangle.");
         puts("=> 2. Perimeter of a triangle.");
         puts("=> 3. Perimeter of a square.");
         puts("=> 4. Area of a Rectangle.");
         puts("=> 5. Area of a Triangle.");
         puts("=> 6. Area of a Square.");
         puts("=> 7. Area of a Circle.");
         puts("=> 8. Area of a Trapezium.");
         puts("=> 9. Area of a diamond.");
         puts("===============================================");
         printf("Decision: ")
         scanf("%d", &decision);
         while (getchar() != "\n");
         
         
         switch (decision){
                
                case 1:
                     float a, b;
                     puts("Please input the base value.");
                                  scanf("%f", &a);
                                  while (getchar() != "\n");
                     puts("Please input the side value.");
                                  scanf("%f", &b);
                                  while (getchar() != "\n");
                     Printf("Result: ", calPeriRect(a, b));
                          
                break;
                
                case 2:
                     float a, b, c;
                     puts("Please input the base value.");
                                  scanf("%f", &a);
                                  while (getchar() != "\n");
                     puts("Please input the first side value");
                                  scanf("%f", &b);
                                  while (getchar() != "\n");
                     puts("Please input the second side value");
                                  scanf("%f", &c);
                                  while (getchar() != "\n");
                     Printf("Result: ", calPeriTrian(a, b, c));
                          
                break;
                
                case 3:
                     float a, b;
                     puts("Please input the base value.");
                                  scanf("%.2f", &a);
                                  while (getchar() != "\n");
                     puts("Please input the side value");
                                  scanf("%.2f", &a);
                                  while (getchar() != "\n");
                     Printf("Result: ", calPeriRect(a, b));
                          
                break;
                
                case 4:
                     float a, b;
                     puts("Please input the base value.");
                                  scanf("%.2f", &a);
                                  while (getchar() != "\n");
                     puts("Please input the side value");
                                  scanf("%.2f", &a);
                                  while (getchar() != "\n");
                     Printf("Result: ", calPeriRect(a, b));
                          
                break;
                
                case 5:
                     float a, b;
                     puts("Please input the base value.");
                                  scanf("%.2f", &a);
                                  while (getchar() != "\n");
                     puts("Please input the side value");
                                  scanf("%.2f", &a);
                                  while (getchar() != "\n");
                     Printf("Result: ", calPeriRect(a, b));
                          
                break;
                
                case 6:
                     float a, b;
                     puts("Please input the base value.");
                                  scanf("%.2f", &a);
                                  while (getchar() != "\n");
                     puts("Please input the side value");
                                  scanf("%.2f", &a);
                                  while (getchar() != "\n");
                     Printf("Result: ", calPeriRect(a, b));
                          
                break;
                
                case 7:
                     float a, b;
                     puts("Please input the base value.");
                                  scanf("%.2f", &a);
                                  while (getchar() != "\n");
                     puts("Please input the side value");
                                  scanf("%.2f", &a);
                                  while (getchar() != "\n");
                     Printf("Result: ", calPeriRect(a, b));
                          
                break;
                
                case 8:
                     float a, b;
                     puts("Please input the base value.");
                                  scanf("%.2f", &a);
                                  while (getchar() != "\n");
                     puts("Please input the side value");
                                  scanf("%.2f", &a);
                                  while (getchar() != "\n");
                     Printf("Result: ", calPeriRect(a, b));
                          
                break;
                
                case 9:
                     float a, b;
                     puts("Please input the base value.");
                                  scanf("%.2f", &a);
                                  while (getchar() != "\n");
                     puts("Please input the side value");
                                  scanf("%.2f", &a);
                                  while (getchar() != "\n");
                     Printf("Result: ", calPeriRect(a, b));
                          
                break;
                
                
                
                default:
                        puts("Invalid Selection. Please select a number from the options.");
                
                       
         }
}
