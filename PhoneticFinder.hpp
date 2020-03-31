#include <string>

using namespace std;

namespace phonetic{
   
    string find(string text, string word);
    string * gen(string *comb,int word_index,int comb_index,string word, int length);
}
