/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
  unsigned guessNumber(unsigned n) {
    unsigned l{0};
    unsigned r{n};
    while (l <= r) {
      unsigned m = (l + r) / 2;
      unsigned g = guess(m);
      if (g == -1)
        r = m - 1;
      else if (g == 1)
        l = m + 1;
      else
        return m;
    }
    return -1;
  };
};

