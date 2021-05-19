#include <iostream>
#include <fstream>
#include <string.h>
#include <list>

using namespace std;



int wordInDict(char * word, char * dict){

    ifstream MyDict(dict);

    if (MyDict)
    {
        string wordDict;

        while(MyDict >> wordDict){
            
            if(strcmp(wordDict.c_str(),word) == 0){
                return 1;
            }

        }
    }
    else
    {
        cout << "error: don't open the file" << endl;
    }

    return 0;

}



int main(int argc, char * argv[])
{

    if(wordInDict(argv[2],argv[1])){
        cout << "The word found in dictionary" << endl;
    }
    else
    {
        cout << "Your word don't exists" << endl;
    }
    

    return 0;
}



//  list<string> * AnagrammeTwoWord(string Word){

//     int length = Word.length();
//     list<string> listWord1;
//     list<string> listWord2;
//     list<string> CoupleWord[2] = {listWord1, listWord2};

//     char * MyWord = (char *) Word.c_str();

//     for (int i =0; i> length; i++){
        
//         break; // *code* 
//     }

//     return CoupleWord;

    

// }