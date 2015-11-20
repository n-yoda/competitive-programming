#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MAX_LEN 15
#define MAX_COST 10000
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define COST(i, j) (((j) - (i)) * ((j) - (i)))

class ColorfulRoad {
public:
  int can_go (string col, int from, int to)
  {
    if (from == to) {
        return 1;
    }
    if (col[from] == 'R' && col[to] == 'G') {
        return 1;
    }
    if (col[from] == 'G' && col[to] == 'B') {
        return 1;
    }
    if (col[from] == 'B' && col[to] == 'R') {
        return 1;
    }
    return 0;
  }

  int getMin(string road) {
	int len = road.length();
    int i, j;
    int cost[MAX_LEN]; // cost to goal

    for (i = 0; i < len - 1; i ++) {
        cost[i] = MAX_COST;
    }

    cost[len - 1] = 0;

    for (i = len - 2; i >= 0; i --) {
	  for (j = i + 1; j < len; j ++) {
		if (can_go(road, i, j)) {
		  cost[i] = MIN (COST(i,j) + cost[j], cost[i]);
		}
	  }
    }

    if (cost[0] < MAX_COST) {
	  return cost[0];
    } else {
	  return -1;
    }
  }
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, string p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"";
	cout << "]" << endl;
	ColorfulRoad *obj;
	int answer;
	obj = new ColorfulRoad();
	clock_t startTime = clock();
	answer = obj->getMin(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p1 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p1;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;
	
	string p0;
	int p1;
	
	{
	// ----- test 0 -----
	p0 = "RGGGB";
	p1 = 8;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "RGBRGBRGB";
	p1 = 8;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "RBBGGGRR";
	p1 = -1;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = "RBRRBGGGBBBBR";
	p1 = 50;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = "RG";
	p1 = 1;
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = "RBRGBGBGGBGRGGG";
	p1 = 52;
	all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
	// ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
