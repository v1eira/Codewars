/*
An anagram is the result of rearranging the letters of a word to produce a new word (see wikipedia).

Note: anagrams are case insensitive

Complete the function to return true if the two arguments given are anagrams of theeach other; return false otherwise.

Examples
"foefet" is an anagram of "toffee"

"Buckethead" is an anagram of "DeathCubeK"
*/

#include <string.h>
#include <ctype.h>

int is_anagram(const char *test, const char *original) {

  if (strlen(test) == strlen(original)){
    int size = strlen(test);
    char word[size];
    strcpy(word, test);
    
    while (strlen(word) > 0) {
      int hasLetter = 0;
      for (int i = 0; i<size; i++) {
        if (tolower(word[0]) == tolower(original[i])) {
          strcpy(word, &word[1]);
          hasLetter++;
          break;
        }
      }
      if (hasLetter == 0) {
        return 0;
      }
    }
    
    return 1;
  }
  
  return 0;
}