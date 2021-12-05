//
//  main.c
//  stringOperations
//
//  Created by Strahinja Jokic on 5.12.21..
//

#include <stdio.h>

//find string length
int legth(char string[]);
//change case
char* re_case(char string[], char function[]);
//count vowels
int count_v(char string[]);
//count consonants
int count_c(char string[]);
//count words
int count_w(char string[]);
//reverse string using second array
char* reverse_prim(char string[]);
//reverse string using original character array
void reverse_sec(char* string[]);
//compare strings
int compare(char string_1[], char string_2[]);
//is the string a palindrome
int is_palindrome(char string[]);
//check for duplicate characters O(n^2)
char* duplicates(char string[]);
//check for duplicate characters hashmap O(n)
char* duplicates_hash(char string[]);
//check for duplicate characters bitwise
char* duplicate_bit(char string[]);
//check if second string is an anagram of the first
int anagram(char string_1[], char string_2[]);
//print all permutations of a string


int main(int argc, const char * argv[]) {
    // insert code here...
    char s[] = "strahinja";
    return 0;
}
