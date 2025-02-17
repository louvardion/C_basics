#include "Poligonos.h"

float calcPeriRect(float a, float b){
      
      p = 2 * (a + b);
      
      return p;
      }
      
float calPeriTrian(float a, float b, float c){
      
      p = a + b + c;
      
      return p;
      }

float calPeriQuadr(float a){
      
      p = a * 4;
      
      return p;
      
      }

float calAreaRect(float b, float h){
      
      A = b * h;
      
      return A;
      
      }

float calAreaTrian(float b, float h){
      
      A = (b * h)/2;
      
      return A;
      
      }

float calAreaQuadr(float a){
      
      A = a * a; 
      
      return A;
      
      }

float calAreaCirc(float r){
      
      A = PI * (r * r);
      
      return A;
      
      }

float calAreaTrap(float b, float B, float h)

      A = ((b + B) * h) / 2;
      
      return A;
      
      }

float calAreaLosa(float D, float d);
      
      A = (d * D) / 2;
      
      return A;
      
      }
