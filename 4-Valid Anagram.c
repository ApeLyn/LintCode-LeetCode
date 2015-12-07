#include <stdio.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    int i,num[26]={0};
    if (s==NULL && t==NULL) return true;
    if (strlen(s) != strlen(t)) return false;
    for (i=0; i<strlen(s); i++) {
    	num[s[i] - 'a']++;
    	num[t[i] - 'a']--;
    }
    for (i=0; i<26; i++) {
    	if (num[i] != 0) return false;
    }
    return true;
}