#include "Conversion.h"

double Celsius(double fahr){   
    return (5.0 / 9.0) * (fahr - 32); 
}
double Fahrenheit(double celsius){
    return 32 + (9.0 / 5.0 * celsius);
}