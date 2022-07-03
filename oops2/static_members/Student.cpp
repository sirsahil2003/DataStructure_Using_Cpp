class Student{

public:
	int age;
	int rollNumber;
	
	
	static int totalStudents;
	
Student()   {

totalStudents++;

}

static int getTotalStudents(){

return totalStudents;

}

};
 //we will initialize static member always outside the class
int Student :: totalStudents; 
