#ifndef _STUDENT_ACADAMIC_H
#define _STUDENT_ACADAMIC_H
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include "StudentDetails.h"

namespace StudentAcadamic
{
	using namespace std;
	using namespace StudentPersonal_info;
	class StudentAcadamicDetails
	{
		public :
			int  m_student_roll_no;
			int  m_Student_class_n;
			char m_Student_name_s[50];
			StudentAcadamicDetails()
			{
				m_student_roll_no = 0;
				m_Student_class_n = 0;
				memset(m_Student_name_s,'\0',sizeof(m_Student_name_s));
				m_student_Average_Percentage_f = 0;
				memset(m_Exam_Names,'\0',sizeof(m_Exam_Names));
				memset(m_SubjectNames,'\0',sizeof(m_SubjectNames));
			}
		private:
			float m_student_Average_Percentage_f;
			int   m_exam_wise_Marks[20][20];
			char  m_Exam_Names[20][50];
			char  m_SubjectNames[20][50];
		
	};
	void print()
	{	
		printf("\n\n hello student acadamic");
	}
};
#endif
