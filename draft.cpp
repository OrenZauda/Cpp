#include <iostream>
#include <string>
#include <algorithm> 
#include <vector> 

using namespace std;
namespace generate{
void gen(vector <string> &arr,int index,string word){ 


    if(index>=word.length()){
        arr.push_back(word);
        return; }

    if(word.at(index)=='p'){

        string temp=word;
        string temp2=word;
        temp.replace(index,1,"b");
        temp2.replace(index,1,"f");

        index++;  

        gen(arr,index, word);
        gen(arr,index, temp);  
        gen(arr,index, temp2);  
        return;

    }
    if(word.at(index)=='f'){
        string temp=word;
        string temp2=word;
        temp.replace(index,1,"p");
        temp2.replace(index,1,"b");

        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        gen(arr,index, temp2);  
        return;

    }
    if(word.at(index)=='b'){
        string temp=word;
        string temp2=word;
        temp.replace(index,1,"f");
        temp2.replace(index,1,"p");

        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        gen(arr,index, temp2);  
        return;

    }
     if(word.at(index)=='c'){
        string temp=word;
        string temp2=word;
        temp.replace(index,1,"k");
        temp2.replace(index,1,"q");
        

        index++; 
        
 
        gen(arr,index, word);
        gen(arr,index, temp);  
        gen(arr,index, temp2);  
        return;

    }
    if(word.at(index)=='q'){
        string temp=word;
        string temp2=word;
        temp.replace(index,1,"k");
        temp2.replace(index,1,"c");

        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        gen(arr,index, temp2);  
        return;

    }
    if(word.at(index)=='k'){
        string temp=word;
        string temp2=word;
        temp.replace(index,1,"c");
        temp2.replace(index,1,"q");

        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        gen(arr,index, temp2);  
        return;

    }
    if(word.at(index)=='w'){
        string temp=word;
        temp.replace(index,1,"v");
        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        return;

    }
    if(word.at(index)=='v'){
        string temp=word;
        temp.replace(index,1,"w");
        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        return;

    }
    if(word.at(index)=='s'){
        string temp=word;
        temp.replace(index,1,"z");
        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        return;

    }
    if(word.at(index)=='z'){
        string temp=word;
        temp.replace(index,1,"s");
        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        return;

    }
    if(word.at(index)=='d'){
        string temp=word;
        temp.replace(index,1,"t");
        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        return;

    }
    if(word.at(index)=='t'){
        string temp=word;
        temp.replace(index,1,"d");
        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        return;

    }
    if(word.at(index)=='g'){
        string temp=word;
        temp.replace(index,1,"j");
        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        return;

    }
    if(word.at(index)=='j'){
        string temp=word;
        temp.replace(index,1,"g");
        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        return;

    }
    if(word.at(index)=='o'){
        string temp=word;
        temp.replace(index,1,"u");
        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        return;

    }
    if(word.at(index)=='u'){
        string temp=word;
        temp.replace(index,1,"o");
        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        return;

    }
    if(word.at(index)=='i'){
        string temp=word;
        temp.replace(index,1,"y");
        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        return;

    }
    if(word.at(index)=='y'){
        string temp=word;
        temp.replace(index,1,"i");
        index++;  
        gen(arr,index, word);
        gen(arr,index, temp);  
        return;

    }
index++; 
gen(arr,index, word);
    
}
}

    

