#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol293;

/*
input = ++++
output =  [
   "--++",
   "+--+",
   "++--"
 ]
*/

tuple<string, vector<string>> testFixture1()
{
  return make_tuple("++++", vector<string>{"--++",
                                           "+--+",
                                           "++--"});
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 " << endl;
  cout << "Expect to see " << Util::toString(get<1>(f)) << endl;
  Solution sol;
  cout << Util::toString(sol.generate(get<0>(f))) << endl;
}

main()
{
  test1();
  return 0;
}