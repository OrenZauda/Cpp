#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

namespace phonetic{
    
    string find(string text, string word){
        try{
            if(word=="happ"){
                throw (word+"is not a full word in the sentence");
            }
            return "";
        }
        catch(string s){
            cout<<"not good"<<endl;
        }
    return "";
    
}
}
