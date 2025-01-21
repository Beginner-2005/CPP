#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
    
    Circle c1;
    Circle c2(6);

    c1 = c2;

    
    cout << c1.getArea() << endl;

    return 0;
}
