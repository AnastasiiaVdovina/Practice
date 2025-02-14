#include "erf_module.h"

double calc_of_probability_with_normal_dist(double z_score){
	return erf(z_score*sqrt(1/2.));
}


