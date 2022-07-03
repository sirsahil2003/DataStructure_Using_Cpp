class Student{

public:
int rollNumber;


private:
int age;

public:

void display(){

cout<<rollNumber<<" "<<age<<endl;


}

public:

int getAge(){

return age;
}

void setAge(int a,int password){

if(password!=1121){

return;
}

if(a<0){
return;

}

age=a;



}




};
