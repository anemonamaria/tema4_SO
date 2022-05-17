#include "so_scheduler.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	unsigned int io;
	unsigned int cuanta;
	int init;
} my_scheduler;

my_scheduler scheduler;

int so_init(unsigned int cuanta, unsigned int io)
{
	if (cuanta == 0 || io > 256)
		return -1;

	scheduler.init = 1;
	scheduler.io = io;
	scheduler.cuanta = cuanta;

	return 0;
}

void so_end() {
	if (scheduler.init != 1)
		return;

	scheduler.init = 0;
}

void so_exec() {

}

int so_wait(unsigned int io) {
	return 0;
}

int so_signal(unsigned int io) {

}


tid_t so_fork(so_handler *handler, unsigned int prioritate) {

}