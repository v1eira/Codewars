/*
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

solution("abc", "bc") # returns true
solution("abc", "d") # returns false
*/

#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
    bool ends = false;
    
    if (strlen(ending) == 0)
      return true;
    
    if (strlen(ending) > strlen(string))
      return false;
      
    for (int i = 0; i < strlen(ending); i++) {
      
      if (string[strlen(string)-1-i] == ending[strlen(ending)-1-i])
        ends = true;
      
      else
        return ends = false;
      
    }
    
    return ends;
}