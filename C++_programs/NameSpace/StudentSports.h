#ifndef _STUDENT_SPORTS_
#define _STUDENT_SPORTS_
#include "StudentAcadamic.h"
#include "StudentSports.h"
namespace StudentSports
{
	//using namespace StudentAcadamic;
	using namespace StudentPersonal_info;
	class StudentSportsDetails
	{
		public:
			//StudentAcadamicDetails m_Student_Acadamic_Details_obj;
			int m_student_sports_roll_no;
			static int class_no;
		private:	
			char m_student_achivements_s[200];
		StudentPersonal_infoDetails m_student_Personal_info;
		
	};
};
#endif
