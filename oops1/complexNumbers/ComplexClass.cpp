class ComplexNumbers{

private:

int real;
int imaginary;

public:
	
ComplexNumbers(int real,int imaginary){

this->real=real;

this->imaginary=imaginary;

}




void add(ComplexNumbers f2){

real = real + f2.real;         //real is by default this->real
imaginary = imaginary + f2.imaginary;

}

void multiply(ComplexNumbers f2){

real=real*f2.real;
imaginary=imaginary*f2.imaginary;



}
void print(){

cout<<real<<" + "<<imaginary<<"i"<<endl;

}



};
