/**
 class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string solve = "";
                if (strs.empty()) {  
            return solve;
        }

        string first = strs[0]; 
        for(int i = 0 ; i < first.length() ; i ++){
            char c = first[i];
            bool match = true;
            for(int j = 1 ; j < strs.size() ; j++){
                string e = strs[j];
                if(c != e[i]){
                    match =false;
                    break;
                }
            }
            if(match){
                solve +=c;
            }
            else{
                break;
            }
        }
        return solve;
    }
};
 */
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string solve ="";
        if(strs.empty()){
            return "";
        }
        string first = strs[0]; // lay chuoi dau tien
        for(int i = 0 ; i < strs.size() ; i++){
            while(strs[i].find(first) !=0) //neu khong co diem chung (chung cac phan tu)
            {
                first = first.substr(0,first.length()-1); //cat duoi first dan dan
                if(first.empty()) return "";
            }
        }
        return first;
    }   
};