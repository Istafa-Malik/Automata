#include <iostream>
#include <string>
using namespace std;

void Check()                             
{
	int count1 = 0,count2 = 0;	
    string str;
    int len = str.length();
    cout<<" Please Keep in mind the lanuguage, that is "<<endl;
    cout<<endl;
    cout<<" a^n+1 b^n+2 |n>=0 "<<endl;
    cout<<endl;
    cout<<"Enter String ";
    cin>>str;    
    
    cout << "\n Your String is " << str << " \n";

    for (int i = 0; i < len; i++)           //loops that will not let any other alphabet to take a's place
	{

    for (int j = 0; j < len - 1; j++)       //loops that will not let any other alphabet to take a's place
	{
      if (str[j] > str[j + 1])
	  { 
          cout<<"Error Your string does not follow the language ";

      }
      
    }
  }

for (int i = 0; i < str.size(); i++)    
    {
       if (str.at(i) == 'a')         //conditions for the language
           count1++;
    }
    for (int i = 0; i < str.size(); i++) 
    {
       if (str.at(i) == 'b')        //conditions for the language
           count2++;
    }
    if(count1+1==count2)
    {
    	cout<<"Correct, Your String Belong to this Language ";
	}
	else
	{
		cout<<"Error! Your String Does not belong in this Language ";
	}

}

int main()
{
Check();
return 0;
}



