#ifndef _STUDENT_PERSONAL_INFO_
#define _STUDENT_PERSONAL_INFO_
#include "StudentAcadamic.h"
namespace StudentPersonal_info
{
	class StudentPersonal_infoDetails
	{
		public:
			char m_student_personal_info_s[50];
			int m_student_sports_roll_no;
			static int m_class_no;
		private:	
			char m_student_achivements_s[200];
	};
	void print()
	{
		printf("\n Hello\n");
	}
};
#endif
