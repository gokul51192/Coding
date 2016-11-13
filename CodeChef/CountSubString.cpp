#include<stdio.h>
#include<string.h>
int main()
{
   long long int l_NumberOfTestCases = 0,l_LengthOfTheString = 0,i,j,count;
   char lstring[100000],lstring1[100000];
   scanf("%lld",&l_NumberOfTestCases);
   while(l_NumberOfTestCases > 0)
   {
      count = l_LengthOfTheString = i = j = 0;
      scanf("%lld",&l_LengthOfTheString);
      memset(lstring,'\0',sizeof(lstring));
      memset(lstring1,'\0',sizeof(lstring1));
      scanf("%s",lstring1);
      while(i<l_LengthOfTheString)
      {
         if(lstring1[i]=='1')
         {
            lstring[j] = lstring1[i];
            j++;
         }
         i++;
      }
      l_LengthOfTheString = j;
      count = count + j;
      for(i=0;i<l_LengthOfTheString;i++)
      {
         for(j=i+1;j<l_LengthOfTheString;j++)
         {
            count++;
         }
      }
      printf("%lld\n",count);
      l_NumberOfTestCases--;
   }
   return 0;
} 
