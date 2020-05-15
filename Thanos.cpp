#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    stack<char> mystack;
    size_t bracket1=-1,bracket2=-1;
    string s,minstr,mystr;
    int i=0,min=50,flag=0;
    cin>>s;
    mystack.push('#');
    while(s[i]!='\0'){ //to find whether bracket sequence is correct or not using stack..if correct then accepted
        if(s[i]=='('){
            if(mystack.top()=='(')//if two continuos open bracket then nested
            flag=1; 
          mystack.push(s[i]);   
        }
        else if(s[i]==')')
        mystack.pop();
        i++;
    }
    if(mystack.top()=='#'&&(s.find('(')!= string::npos)) //when string is accepted
    { if(flag==1)  //when string is accepted as well as nested
          cout<<"nested";
      else {    //when string is accepted but not nested
            while(s[bracket2+1]!='\0'){
            bracket1 = s.find("(",bracket1+1);
            bracket2 = s.find(")",bracket2+1);
            mystr=s.substr(bracket1+1,bracket2-bracket1-1);
            if(mystr.length()<min){ //to find min length string
            min=mystr.length();
            minstr=mystr; }
            i++;
            }
            if(min==0)  //when min length string is zero
            cout<<"zero";
            else cout<<minstr;
      }
      
    }
    else //when string is not accepted
    cout<<"incorrect";
    return 0;
}
