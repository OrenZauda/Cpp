#include <iostream>
#include <stdexcept>
#include <string>
#include <algorithm> 
#include "draft.hpp"

using namespace std;

namespace phonetic{
    // function to generate all the variation of the word
    
    
    string find(string Text, string Word){

        //inputs to lower case
        string text = Text;
        transform(text.begin(), text.end(), text.begin(),
        [](unsigned char c){ return std::tolower(c); });
        string word = Word;
        transform(word.begin(), word.end(), word.begin(),
        [](unsigned char c){ return std::tolower(c); });

        // function to create all possible charachter replacation
        vector <string> all_options;
        int index=0;
        generate::gen(all_options,index,word);
        
        try{
            
            for(int i=0;i<all_options.size();i++){
                int pos=text.find(all_options[i]);
                if (pos!=string::npos){
                    string result = Text.substr(pos,word.length());
                return result;
                }
            }
            throw "word not found"; // if word dossnt founf     
            }
            catch(string s){
            cout<<s<<endl;
        }
                
    return "";
}
}
