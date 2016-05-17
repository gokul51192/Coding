#include<stdio.h>
#include<string.h>

class stringvalue
{
	char str[100];
	public:
	stringvalue()
	{
		memset(str,'\0',sizeof(str));
	}
	stringvalue operator+ (stringvalue & rhs)
	{
		stringvalue temp;
		strcpy(temp.str,this->str);
		strcat(temp.str,rhs.str);
		return 	temp;
	}
	/*stringvalue operator+ ( )
	{
		stringvalue temp;
		strcpy(temp.str,this->str);
		printf("\n overload operator called");
		return 	temp;
	}*/
	char * print()
	{
		printf("\nstring value:[%s]\n",str);
		return str;
	}
	void strassign(char * p_value)
	{
		strcpy(str,p_value);
		return;
	}	
	friend const stringvalue & operator+ (const stringvalue &rhs)
	{
		printf("operator overloading + called,[%s]",rhs.str);	
		return rhs;
	}
	stringvalue(const stringvalue & p_obj )
	{
		printf("\n copy constructor called\n");
		strcpy(str,p_obj.str);
	}
	const stringvalue  operator=(const stringvalue &rhs)
	{	
		stringvalue temp;
		strcpy(temp.str,rhs.str);	
		printf("Assignment operator overloading = called,[%s]",rhs.str);	
		return temp;	
	}
};
int main()
{
	stringvalue s1,s2,s3;
	s1.strassign((char *)"Hello");
	s2.strassign((char *)"World");
	//stringvalue s3 = s1+s2;
	s1 = +s2;
	stringvalue s6 = s1;
	printf("obj1,[%s]",s1.print());
	printf("obj2,[%s]",s2.print());
	printf("obj3,[%s]",s3.print());
	return 0;
}
