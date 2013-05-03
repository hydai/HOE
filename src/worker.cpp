/*
	Worker class definition file

	Jack Force
	jack1243star@gmail.com
*/

#include "worker.hpp"

Worker::Worker(void){
}

int Worker::getWorkerNum(void){
	return
		num_gold_worker +
		num_food_worker +
		num_wood_worker +
		num_buil_worker;
}
