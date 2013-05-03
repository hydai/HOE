/*
	Include file for worker class

	Jack Force
	jack1243star@gmail.com
*/

#ifndef WORKER_HPP
#define WORKER_HPP

class Worker{
	/* Number of gold workers */
	int num_gold_worker;
	/* Number of food workers */
	int num_food_worker;
	/* Number of wood workers */
	int num_wood_worker;
	/* Number of building workers */
	int num_buil_worker;

public:
	/* Constructor */
	Worker(void);
	/* Get total number of workers */
	int getWorkerNum(void);
};

#endif /* WORKER_HPP */
