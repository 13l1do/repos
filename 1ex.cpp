/*****************************************
* ?????: ??????? ?.?.                    *
* ????: 30.09.2021                       *
* ????????: ????? ? ????- ? ???????????? *
******************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;
const double PI = 3.141592653589793 ;

int main() {  
  int l = 13;
  double e = 6, r = 4.5, R = 4.7, C = 0;
  double el = 0;
  
  el = 8.85 * pow(10, -2);
  
  while (R <= 5) {      
      C = (2 * PI * e * el * l) / log(R / r);      
      cout << "R = " << R << " " << "C = " << C << endl;      
      R = R + 0.1 ;
      };
      
    R = R - 0.1;
    
    do  {
      R = R + 1;
      C = (2 * PI * e * el * l) / log(R / r);
      cout << "R = " << R << " " << "C = " << C << endl;
      } while (R < 10);
      
}

