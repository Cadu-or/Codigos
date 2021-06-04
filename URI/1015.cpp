/* Problem: 1015 - Distance Between Two Points */

#include <iostream>
#include <math.h>

int main(){
    float x1, x2, y1, y2, result1, result2;

    std :: cin >> x1 >> y1 >> x2 >> y2;

    result1 = x2-x1;
    result2 = y2-y1;

    float result = sqrt((result1*result1) + (result2*result2));
    
    std :: cout << std :: fixed;
    std :: cout.precision(4);
    std :: cout << result << std :: endl;

    return 0;
}