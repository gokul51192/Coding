#include<iostream>
#include<stdio.h>
#include<string.h>
#include "stackheader.h"
#include<string.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
void stack::initialize()
{
	head = 0;
}
void stack::Link::initialize(void * p_data,Link * node)
{
	data = p_data;
	next = node;
	return;
}
void stack::push(void * p_data)
{
	Link *l_link =  new Link;
	printf("\n:%s",(char *)p_data);
	l_link->initialize(p_data,head);
	head = l_link;
	return;
}
void stack::pop(void **p_data)
{
	if( head == 0)
		return;
	Link * old_Link= head;
	void *old_data = head->data;
	head = head->next;
	*p_data = old_data;
	delete old_Link;
	return;
}
void stack::peek(void * p_data)
{
	if(head == 0)
		return;
	p_data = head->next;
	return;	
}
void stack::cleanup()
{
	if(head != 0)
		printf("\nstack is not empty\n");
	return;
}
int main(int argc,const char * argv[])
{
	ifstream ifs;
	ifs.open(argv[1]);
	stack textlines;
	textlines.initialize();
	string line;
	while(getline(ifs,line))
	{
		int length = strlen(line.c_str());
		if(length == 0)
			continue;
		char * l_str = NULL;
		l_str = new char[length+1];
		strcpy(l_str,line.c_str());
		textlines.push(l_str); 
	}
	char * str;
	bool l_conditional_value = true;
	while (l_conditional_value)
	{
		str = NULL;
		void * p = NULL;
		textlines.pop(&p);
		str = (char *)p;
		if( str != NULL)
		{

			printf("::%s\n",(char *)str);
			delete str;
		}
		else
		{
			l_conditional_value = false;
		}
	}
	textlines.cleanup();
	return 0;
}
