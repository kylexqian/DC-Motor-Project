#ifndef ISENSE__H__
#define ISENSE__H__

#include <xc.h>   // processor SFR definitions

void adc_init(void);

unsigned int adc_read(void);

int read_cur_amps(void);

#endif // ISENSE__H__
