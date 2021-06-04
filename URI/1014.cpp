/* Problem: 1014 - Consumption */

#include <iostream>
#include <math.h>

int main(){
    int x;
    float y, result;

    std :: cin >> x >> y;
    result = x/y;

    result = ceilf(result*1000)/1000;

    std :: cout << result << " km/l" << std :: endl;

    return 0;
}