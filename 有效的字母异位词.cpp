//
//  有效的字母异位词.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/18.
//

#include <stdio.h>

class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length()) return false;
        char[] sArray = s.toCharArray();
        char[] tArray = t.toCharArray();
        quickSort(sArray, 0 , s.length() - 1);
        quickSort(tArray, 0 , t.length() - 1);
        
        for(int i = 0; i < s.length() ; i++){
            if(sArray[i] != tArray[i]) return false;
        }
        return true;
    }
    private void quickSort(char[] s, int lo, int hi){
        if(hi <= lo) return;
        int mid = part(s,lo,hi);
        quickSort(s,lo,mid-1);
        quickSort(s,mid+1,hi);
    }
    private int part(char[] s, int lo, int hi){
        int i = lo, j = hi + 1;
        char temp;
        char c = s[lo];
        while(true){
            while(s[++i] < c) if(i == hi) break;
            while(s[--j] > c) if(j == lo) break;
            if(i >= j) break;
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
        temp = s[lo];
        s[lo] = s[j];
        s[j] = temp;
        return j;
    }
}
