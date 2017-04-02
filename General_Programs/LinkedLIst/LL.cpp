#include<stdio.h>
#include<string.h>
#include<stdlib.h>
class StudentInfo
{
	public:
		int m_studentRollNo;
		char m_studentName[100];
		StudentInfo * m_nextNode;
		StudentInfo()
		{
			m_nextNode =  NULL;
		}
};
StudentInfo *g_StartNode = NULL;
void printStudentDetails(StudentInfo * p_obj);
void insertDatatoLL()
{
	StudentInfo * l_ref_StartNode = g_StartNode;
	StudentInfo *l_obj = new StudentInfo();
	printf("\nEnter Student Roll NO\n");	
	scanf("%d",&l_obj->m_studentRollNo);
	printf("\nEnter Student Name\n");	
	scanf("%s",l_obj->m_studentName);

	if(l_ref_StartNode != NULL)
	{
		while(l_ref_StartNode->m_nextNode != NULL)
			l_ref_StartNode = l_ref_StartNode->m_nextNode;
		l_ref_StartNode->m_nextNode = l_obj;
	}
	else
	{
		l_ref_StartNode = l_obj;
		g_StartNode = l_ref_StartNode;
	}	
	fflush(stdin);
	fflush(stdout);
	return;

}
void DeleteDatafromLL()
{
	printf("\n Enter your Student RollNO that is needed to be deleted \n");
	int l_studentRollNo;
	scanf("%d",&l_studentRollNo);
	StudentInfo * l_ref_StartNode = g_StartNode;
	StudentInfo * l_ref_prevNode = g_StartNode;
	if(l_ref_StartNode != NULL)
	{
		while(l_ref_StartNode->m_studentRollNo != l_studentRollNo && (l_ref_StartNode->m_nextNode != NULL))
		{
			l_ref_prevNode = l_ref_StartNode;
			l_ref_StartNode = l_ref_StartNode->m_nextNode;
		}		
		if(l_ref_StartNode->m_studentRollNo == l_studentRollNo)
		{
			if(l_ref_prevNode == l_ref_StartNode)
			{	
				printf("\n Details going to be removed from Linked LIst\n");
				printStudentDetails(l_ref_StartNode);
				g_StartNode = l_ref_StartNode->m_nextNode;
				delete l_ref_StartNode;
			}
			else 
			{
				printf("\n Details going to be removed from Linked LIst\n");
				printStudentDetails(l_ref_StartNode);
				l_ref_prevNode->m_nextNode = l_ref_StartNode->m_nextNode;
				delete l_ref_StartNode;
			}
		}
		else
		{
			printf("unable to find your student roll no :%d",l_studentRollNo);
		}
	}
	fflush(stdin);
	fflush(stdout);
	return;
}
void PrintDatafromLL()
{
	printf("\nEnter your student Roll NO");
	int l_studentRollNO;
	scanf("%d",&l_studentRollNO);
	StudentInfo * l_ref_StartNode = g_StartNode; 
	if(l_ref_StartNode != NULL)
	{
		while(l_ref_StartNode->m_studentRollNo != l_studentRollNO && (l_ref_StartNode->m_nextNode != NULL))
			l_ref_StartNode = l_ref_StartNode->m_nextNode;
		if(l_ref_StartNode->m_studentRollNo == l_studentRollNO)
		{
			printStudentDetails(l_ref_StartNode);	 
		}
		else
			printf("\n Unable to find the Student:[%d] Details",l_studentRollNO);
	}
	fflush(stdin);
	fflush(stdout);
	return;
}
void printAll()
{
	StudentInfo * l_ref_StartNode = g_StartNode;
	while(l_ref_StartNode != NULL)
	{
		printStudentDetails(l_ref_StartNode);
		l_ref_StartNode = l_ref_StartNode->m_nextNode;
	}
			fflush(stdin);
			fflush(stdout);
}
void printStudentDetails(StudentInfo * p_obj)
{
	if(p_obj != NULL)
	{
		printf("\n StudentName\t\t:[%s]\t StudentRollNO\t\t:[%d] ObjectMemoryPosition\t\t:[%ld]\n",p_obj->m_studentName,p_obj->m_studentRollNo,(long int)p_obj);
	}
	return;
}
int main()
{
	char temp;
	while(1)
	{
		printf("Enter your choice \n1.Insert Data \n2.Delete Data \n3.PrintData \n4.PrintAll \n5.Exit");
		int choice;
		scanf("%d",&choice);
		if(choice == 1)
		{
			insertDatatoLL();
			temp = getchar();
			temp = getchar();
			system("clear");
		}
		else if(choice == 2)
		{
			DeleteDatafromLL();
			temp = getchar();
			temp = getchar();
			system("clear");
		}
		else if(choice == 3)
		{
			PrintDatafromLL();
			temp = getchar();
			temp = getchar();
			system("clear");
		}	
		else if(choice == 4)
		{
			printAll();
			temp = getchar();
			temp = getchar();
			system("clear");
		}
		else
			exit(0);
	}
	return 0;
}
