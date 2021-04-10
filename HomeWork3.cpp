#include <iostream>

extern int a;
extern int b;
extern int c;
extern int d;

int main()
{   
    float res = a*(b+((float)c/(float)d));
    std::cout<<res;
        
    return 0;
}