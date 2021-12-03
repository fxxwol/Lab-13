#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h" 
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	n = 1;
	a = (pow(x, 3)) / 6.;
	s = Pi / 2. - x - a;
	do {
		n++;
		dod(); 
		s -= a;
	} while (abs(a) > e);
}
