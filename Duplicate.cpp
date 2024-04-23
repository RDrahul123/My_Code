#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<cctype>
using namespace std;

string duplicates(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::toupper);

    stringstream ss(str);
    string word;
    vector<string> words;
    string result;

    while(ss >> word)
    {
        words.push_back(word);

    }

    for(size_t i=0; i<words.size(); ++i)
    {
        bool isduplicate= false;

        for(size_t j=0; j<i; ++j)
        {
            if(words[i]==words[j])
            {
                isduplicate= true;
                break;
            }
        }

        if(!isduplicate)
            result= result+(words[i]+" ");

    }    
        
        if(result.empty())
            result.pop_back();

        return result;
}

int main()
{
    string inputstr;
    
    cout<<"Enter the string: ";
    getline(cin, inputstr);

    string result= duplicates(inputstr);

    cout<<"\nString without duplicates is : "<<result<<endl;

    return 0;
}