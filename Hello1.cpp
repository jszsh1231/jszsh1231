//hello.cpp
//This RevB updated locally and upload to git.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "!"};
    
    for (const string& word : msg) //C++11 standard
    {
        cout << word << " ";
    }
    cout << endl;
}