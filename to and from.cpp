#include <iostream>
#include <string>
using namespace std;
char arr[20][20];
int main()
{
	     for(int k=0;;k++)
         {
	         int a,t=0;
              cin>>a;
             if(a!=0)
             {
              string s;
              cin>>s;
              int y=s.length()/a;
             for(int i=0;i<y;i++)
             {
               if(i%2==0)
               {
                for(int j=0;j<a;j++)
                {
                arr[i][j]=s[t];
                t++;
                }
               }
              else
              {
                for(int j=a-1;j>=0;j--)
                 {
                   arr[i][j]=s[t];
                    t++;
                 }
              }
            }
              for(int d=0;d<a;d++)
             {
               for(int e=0;e<y;e++)
               cout << arr[e][d];
             }
             }
        else break;
            }

    return 0;
}
