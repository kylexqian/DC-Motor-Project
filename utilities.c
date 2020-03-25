#include "utilities.h"

// current mode
static volatile Mode_datatype mode;

// set mode function
void set_mode(Mode_datatype m){
	mode = m;
}

// get mode function
Mode_datatype get_mode(void){
	return mode;
}
