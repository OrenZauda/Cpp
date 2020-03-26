#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

namespace phonetic{
    
    string find(string text, string word){
        try{
            if(text.find(word)==string::npos){
                throw (word+"is not a full word in the sentence");
            }
            return word;
        }
        catch(string s){
            cout<<"not good"<<endl;
        }
    
    return word;
}
}
