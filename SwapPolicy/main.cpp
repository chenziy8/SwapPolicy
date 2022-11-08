#include "swap-policy.hpp"
#include <iostream>
//FIFO, Random policy and LRU Policy
int main(int argc, char const* argv[])
{
	int iterations = 1000;
	RandomPolicy randomPolicy(32, 100);
	LeastRecentlyUsedPolicy lruPolicy(32, 100);
	FirstInFirstOutPolicy fifoPolicy(32, 100);
	Workload workload;

	cout << "====== EVEN WORKLOAD ======" << endl;
	workload.testEvenWorkload(&randomPolicy, 1000);
	workload.testEvenWorkload(&lruPolicy, 1000);
	workload.testEvenWorkload(&fifoPolicy, 1000);

	cout << "====== CACHEABLE WORKLOAD ======" << endl;
	workload.testCacheableWorkload(&randomPolicy, 1000);
	workload.testCacheableWorkload(&lruPolicy, 1000);
	workload.testCacheableWorkload(&fifoPolicy, 1000);

	return 0;
}
