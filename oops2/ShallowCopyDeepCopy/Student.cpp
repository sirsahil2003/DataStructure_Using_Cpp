class Student{
private:
int age;
char *name; //dynamic

public:

Student(int age,char* name){

this->age=age;

//shallow copy bkz we are referencing address of string 

//this->name = name;


//Deep copy
//we will make anothe array instead referencing initial one

this->name = new char[strlen(name+1)];
strcpy(this->name,name);

}

void Display(){

cout<<this->age<<" "<<this->name<<endl;
}

};
