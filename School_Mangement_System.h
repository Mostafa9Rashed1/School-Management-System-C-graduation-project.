#ifndef SCHOOL_MANGEMENT_SYSTEM_H_
#define SCHOOL_MANGEMENT_SYSTEM_H_

#define LIST_EMPTY 0
#define LIST_NEMPTY 1

typedef struct{
	u8 days;
	u8 months;
	u32 years;
}DOB;


typedef struct{
	s8  Name_frist[15]  ;
	s8 Date[15];
	DOB  DOB_Student ;
	s8  Address[15];
	s32 ID;
	s8 Phone_Number[15];
	f32 Student_Score;		
	}Student_Data;

typedef struct Node{
	Student_Data Data_Students;
	struct Node *NextPtr;
	struct Node *PerviousPtr;
	}Node_t;
	
	typedef struct{
		u8 size;
		Node_t *HeadPtr;
		Node_t *TailPtr;
		}List_t;


void MAIN_MENU(void);
void New_Student(void);
void Delete_Student(void);
void studentList(void);
void STUDENT_EDIT(void);
void RANK_STUDENT(void) ;
void STUDENT_SCORE(void) ;


List_t *Create_List(void);
void App_start(void);
void Add_Node(List_t* ListPtr,Student_Data Students_d);
void Delete_Node(List_t* ListPtr,Node_t* NodePtr);
void Start(void);
void Exit(void);

extern List_t* List1;
#endif