class Student{

public:
int rollNumber;


private:
int age;

public:

//destructor

~Student(){

cout<<"Destructor called!!"<<endl;
}





//default constructor
Student(){


cout<<"Constructor 1 called"<<endl;

}

Student(int rollNumber){

cout<<"Parameterized Constructor 2 called"<<endl;

//in here necessary to use this keyword to    identify easily 
//rollNumber=rollNumber;    if we do so we will get rollNum sd garbage


// now it we same as we passed
//this is a pointer variable or poiter type keyword
this->rollNumber=rollNumber;
}


Student(int a,int r){

cout<<"this::"<<this<<endl;

cout<<"Parameterized Constructor 3 called"<<endl;

this->age =a;

this->rollNumber=r;

}



void display(){

cout<<rollNumber<<" "<<age<<endl;


}

public:

int getAge(){

return age;

}

};
