#include <iostream>
#include <cmath>
using namespace std;

#define z 4
#define INPUT(x) cin >> x
#define PRINT(str) cout << (str)
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define POW2(x) ((x)*(x))

void main()
{
    double x, y, w = 0;
    PRINT("x = "); INPUT(x);
    PRINT("y = "); INPUT(y);

#if  z > 3
    w = MIN(POW2(x + y), POW2(x - z));
#elif z <= 3
    w = MAX(x * y + y * z, POW2(z * x + y * z));
#endif

    PRINT(w);
}