#pragma once
#include <map>

using namespace std;

class Policy
{
	int access_counts = 0;
	int cache_misses = 0;
	int page_count;
	int cache_size;
	map<int, int> pages;

public:
	Policy(int input_page_count, int cache_size);
	virtual bool AccessPage(int page_number) = 0;
	virtual int get_access_counts() = 0;
	virtual int get_cache_misses() = 0;
};

class WorkLoad
{

public:
	WorkLoad(Policy policy);
	void testEvenWorkload(int iterations);
	void testCacheableWorkload(int iterations);
};

class LeastRecentUsed :public Policy 
{



};
