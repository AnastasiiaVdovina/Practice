#include <stdio.h>
#include "erf_module.h"

int main(){
	double z_score;

	printf("Enter Z-score: ");
	if (scanf("%lf", &z_score) != 1){
		fprintf(stderr, "Invalid input!\n");
		return 1;
	}

	double resulting_probability  = calc_of_probability_with_normal_dist(z_score);

	printf("The integral of a Normal (0,1) distribution "
	"between -Z and Z is: %g\n", resulting_probability);

	return 0;
}
