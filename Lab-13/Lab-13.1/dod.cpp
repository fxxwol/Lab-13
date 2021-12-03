#include "dod.h"
#include "var.h" 
#include <math.h>
using namespace nsVar;
void nsDod::dod() {
	a *= pow((2. * n - 1) * x, 2) / (2. * n * (2. * n + 1));
}