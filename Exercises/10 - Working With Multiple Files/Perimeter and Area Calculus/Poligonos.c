#include "Poligonos.h"

float calPeriRect(float a, float b){
      
      float p = 2 * (a + b);
      
      return p;
      }
      
float calPeriTrian(float a, float b, float c){
      
      float p = a + b + c;
      
      return p;
      }

float calPeriQuadr(float a){
      
      float p = a * 4;
      
      return p;
      
      }

float calAreaRect(float b, float h){
      
      float A = b * h;
      
      return A;
      
      }

float calAreaTrian(float b, float h){
      
      float A = (b * h)/2;
      
      return A;
      
      }

float calAreaQuadr(float a){
      
      float A = a * a; 
      
      return A;
      
      }

float calAreaCirc(float r){
      
      float A = PI * (r * r);
      
      return A;
      
      }

float calAreaTrap(float b, float B, float h){

      float A = ((b + B) * h) / 2;
      
      return A;
      
      }

float calAreaLosa(float D, float d){
      
      float A = (d * D) / 2;
      
      return A;
      
      }
