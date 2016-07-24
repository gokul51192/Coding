#include<iostream>
#include<cstring>
#include<unistd.h>
using namespace std;
class UserDetails
{
	private:	
		char m_originalPassword[31];
	public:
		char m_userId[30];
		char m_encryptedPassword[61];
		void setPassWord()
		{
			bool l_byteCopyFlag_b = true;
			for(int i=0;i<60;i++)
			{
				if(l_byteCopyFlag_b == true)
				{
					m_originalPassword[i==0?0:(i/2)] = m_encryptedPassword[i];
					l_byteCopyFlag_b = false;
				}	
				else
				{
					l_byteCopyFlag_b = true;
				}
			}
		}
		UserDetails()
		{
			memset(m_originalPassword,'\0',sizeof(m_originalPassword));	
			memset(m_userId,'\0',sizeof(m_userId));
			memset(m_encryptedPassword,'\0',sizeof(m_encryptedPassword));
		}
		~UserDetails()
		{
			memset(m_originalPassword,'\0',sizeof(m_originalPassword));	
			memset(m_userId,'\0',sizeof(m_userId));
			memset(m_encryptedPassword,'\0',sizeof(m_encryptedPassword));
		}

};
int main()
{	
	UserDetails l_obj;
	cout<<"\nEnter ID";
	cin>>l_obj.m_userId;
	cout<<"\nEnter Password with one real password char and one dummy char and so on";
	cin>>l_obj.m_encryptedPassword;
	l_obj.setPassWord();
	cout<<"\n Address of userID["<<(long)&l_obj.m_userId<<"]\t Value of userID:"<<l_obj.m_userId;
	char * l_hacked_obj =(char *) &l_obj.m_userId;
	l_hacked_obj = l_hacked_obj - 31;
	//Here we are accessing the original password through password
	cout<<"\n Address of Password["<<(long)l_hacked_obj<<"]\t Value of Password:"<<l_hacked_obj;
	return 0;
}


