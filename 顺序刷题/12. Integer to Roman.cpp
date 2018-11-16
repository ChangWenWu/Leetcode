//
//  12. Integer to Roman.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/16.
//  Copyright © 2018 JarvisWu. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
  public:
    string intToRoman(int num) {
        string romanPieces[] = {"",   "I",   "II", "III", "IV",   "V",   "VI",   "VII", "VIII", "IX",  "",    "X",
                                "XX", "XXX", "XL", "L",   "LX",   "LXX", "LXXX", "XC",  "",     "C",   "CC",  "CCC",
                                "CD", "D",   "DC", "DCC", "DCCC", "CM",  "",     "M",   "MM",   "MMM", "MMMM"};
        return romanPieces[num / 1000 + 30] + romanPieces[(num / 100) % 10 + 20] + romanPieces[(num / 10) % 10 + 10] +
            romanPieces[num % 10];
    }
};
