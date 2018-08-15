//
//  Fizz Buzz.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/1.
//

#include <stdio.h>

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int c3 = 2;
        int c5 = 4;
        int c15 = 14;
        vector<string> r;
        for(int i = 1; i <= n; i++){
            if(c15 == 0){
                r.push_back("FizzBuzz");
                c15 = 15;
                c3 = 3;
                c5 = 5;
            }
            else if(c3 == 0){
                r.push_back("Fizz");
                c3 = 3;
            }
            else if(c5 == 0){
                r.push_back("Buzz");
                c5 = 5;
            }
            else{
                r.push_back(to_string(i));
            }
            c3--;
            c5--;
            c15--;
        }
        return r;
    }
};
