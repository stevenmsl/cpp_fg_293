#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <set>
#include <cstring>
using namespace sol293;
using namespace std;

/*takeaways
  - scan from left to right to find
    all two consecutive '+' occurrences
  - flip them to '--' for each occurrence
    you encounter while keep other chars
    intact - meaning you always start
    from the initial string before flipping
    the occurrences
*/

vector<string> Solution::generate(string str)
{
  auto result = vector<string>();

  for (auto i = 1; i < str.size(); i++)
  {
    if (str[i - 1] == '+' && str[i] == '+')
    {
      auto flipped = str;
      /* flip them */
      flipped[i - 1] = flipped[i] = '-';
      result.push_back(flipped);
    }
  }

  return result;
}