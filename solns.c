/* Enter your solutions in this file */
#include <stdio.h>

float average(int list[] , int no_of_elements) {
	int ret = 0;
	for (int i = 0; i < no_of_elements ; i++) {
		ret += list[i];
	}
	return (float) ret/no_of_elements;
}

int max(int list[] , int no_of_elements) {
	int ret = 0;
	for (int i = 0 ; i < no_of_elements ; i++) {
		if (list[i] > ret) {
			ret = list[i];
		}
	}
	return ret;
}

int min(int list[] , int no_of_elements) {
	int ret = list[0];
	for (int i = 1 ; i <no_of_elements - 1 ; i++) {
		if (list[i] < ret) {
			ret = list[i];
		}
	}
	return ret;
}

int mode(int list[] , int no_of_elements) {
	int list_of_repeatation[no_of_elements];
	int array_address = 0;
	for (int i = 0; i < no_of_elements ; i++) {
		int repeating = 1;
		for (int j = i + 1; j < no_of_elements ; j++) {
			if ( list[i] == list[j] ) {
				repeating++;
			}
		}
		list_of_repeatation[i] = repeating;	
	}
	int max_count = 0;
	for (int k = 0; k < no_of_elements ; k++) {
		if (list_of_repeatation[k] > max_count) {
			max_count = list_of_repeatation[k];
			array_address = k;
		}
	}
	return list[array_address];
}	


int factors (int n ,  int ret[]) {
	int factor = 0;
	while (n != 1) {
		for (int i = 2; i <=n ; i ++) {
			if (n%i == 0) {
				ret[factor] = i;
				factor++;
				n = n/i;
				break;
			}
		}
	}
	return factor;
}


