#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

int main()
{


char str[100]="Prep insta";
int length = 0;

length = strlen(str);

for(int i=0;i<length;i++)
{
if(i==0||i==(length-1))
{
str[i]=toupper(str[i]);
}
else if(str[i]==' ')
{
str[i-1]=toupper(str[i-1]);
str[i+1]=toupper(str[i+1]);
}
}

cout<<"String after capitalizing first and last letter of each word:\n"<<str;
return 0;
}
