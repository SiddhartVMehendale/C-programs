/* Given a string, sort in decreasing order based on the frequency of characters. If there are multiple possible solutions
   return any of them. For example, given the string tweet, return tteew. eettw would also be acceptable */

#include<iostream>


using namespace std;

class Sort
{
    string str,tokStr;

    public:
        Sort(string nwstr)
        {
            str = nwstr;
        }

        void tokenise()
        {
            int l = str.length();
            for(int i = 0 ; i < l ; i++)
            {
                tokStr = str.at(i);
            }
            cout << tokStr;
        }
};


int main()
{
    string str;
    cout << "Enter the string which you calculate the frequency: ";
    cin>>str;
    Sort s = Sort(str);
    s.tokenise();
}