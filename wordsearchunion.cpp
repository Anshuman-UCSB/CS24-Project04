#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include<string>
#include "bag.h"

// ADD ANY HEADER FILES YOU NEED


using namespace std;

void to_lower(std::string& s) {
   for (std::string::iterator p = s.begin();
        p != s.end(); ++p) {
      *p = tolower(*p);
   }
}


// Given a directory, return all the files in that directory
// if the directory does not exist -- report error.
int getdir (string dir, vector<string> &files)
{
  DIR *dp;
  struct dirent *dirp;
  if((dp  = opendir(dir.c_str())) == NULL) {
    cout << "Error(" << errno << ") opening " << dir << endl;
    return errno;
  }

  while ((dirp = readdir(dp)) != NULL) {
    files.push_back(string(dirp->d_name));
  }
  closedir(dp);
  return 0;
}

int main(int argc, char* argv[])
{
  string dir; //
  vector<string> files = vector<string>();

  Bag cont;
  

  // This part of the program checks if a directory containing the files has been
  // specified. If There is no directory specified, the program terminates.
  // Otherwise, it opens the sub-directory containg the data files using the function
  // getdir().
  if (argc < 2)
    {
      cout << "No Directory specified; Exiting ..." << endl;
      return(-1);
    }
  dir = string(argv[1]);
  if (getdir(dir,files)!=0)
    {
      cout << "Error opening " << dir << "; Exiting ..." << endl;
      return(-2);
    }
  
  // This part of the program opens every data file one by one and prints out the
  // words contained in it.

  string slash("/");
  for (unsigned int i = 0; i < files.size(); i++) {
    if(files[i][0]=='.') continue; //skip hidden files
    cout << "OPEN " << files[i] << endl;
    ifstream fin((string(argv[1])+slash+files[i]).c_str()); //open using absolute path
    // ...read the file..
    string word;
    while(true){
      fin>>word;
      if(fin.eof()) {cout << "EOF " << files[i] << endl; break;}
      // Insert a single C++ statement below to print "<filename>::<word>".
      to_lower(word);
      cont.addWord(word,files[i]);
    }
    fin.close();
  }

  //cout << "This is the next part of the program that you will exercise in the next project." << endl;
  //cont.print_words();

  cout<<"Enter word1: ";
  std::string word1;
  getline(cin, word1, '\n');

  cout<<"Enter word2: ";
  std::string word2;
  getline(cin, word2, '\n');

  // at this point, the input words are stored in the
  // variables "word1" and "word2"

  // ADD CODE HERE TO INVOKE MEMBER FUNCTIONS OF
  // BAG OBJECT CREATED AT LINE 46 FOR PRINTING
  // FILENAMES THAT CONTAINS EITHER OR BOTH OF
  // THE GIVEN WORDS

  // YOU MAY ADD CODE HERE IF NEEDED TO
  // CLEAR ANY DYNAMICALLY ALLOCATED SPACES
  cont.printUnion(word1, word2);
    
  return 0;
}




