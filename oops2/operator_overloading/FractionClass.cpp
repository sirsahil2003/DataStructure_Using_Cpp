class Fraction{

private:

int numerator;
int denominator;

public:
   
   Fraction(int numerator,int denominator){
   
   this->numerator = numerator;
   this->denominator = denominator;
   
   }
   
   void print(){
   
   cout<<this->numerator<<" / "<<denominator<<endl;
   
   
   }
   
  void simplify(){
  int gcd = 1;
  int j = min(this->numerator,this->denominator);
  for(int i = 1;i<=j;i++){
  
  if(this->numerator % i==0 && this->denominator % i==0){
      
      gcd = i;
  
      }
      
  
  }
  this->numerator = this->numerator/gcd;
  this->denominator = this->denominator/gcd;
  
  }
  






Fraction add(Fraction const &f2){

int lcm = denominator*f2.denominator;

int x = lcm / denominator;

int y = lcm / f2.denominator;

int num = x*numerator + (y*f2.numerator);

//numerator = num;
//denominator = lcm;

//this->simplify();
Fraction fnew(num,lcm);
fnew.simplify();

return fnew;

                 }
                 
//functions which do not make changes to the property of current object or to this keyword
                 
Fraction operator+(Fraction const &f2) const{

int lcm = denominator*f2.denominator;

int x = lcm / denominator;

int y = lcm / f2.denominator;

int num = x*numerator + (y*f2.numerator);

//numerator = num;
//denominator = lcm;

//this->simplify();
Fraction fnew(num,lcm);
fnew.simplify();

return fnew;

                 }     
                 
Fraction operator*(Fraction const &f2) const{
int n = numerator;
int d = denominator;

n  = n*f2.numerator;
d =  d*f2.denominator;

Fraction fnew(n,d);
fnew.simplify();
return fnew;
}     

bool operator==(Fraction const &f2) const{ 

return (numerator == f2.numerator && denominator == f2.denominator);

}      
                   
void multiply(Fraction const &f2){

numerator = numerator*f2.numerator;
denominator = denominator*f2.denominator;

simplify(); //use of this keyword is optional will be called for f1

}

//pre increment

Fraction& operator++(){

numerator = numerator + denominator;

simplify();

return *this;

}

//post-increment

Fraction operator++(int){

Fraction fnew(numerator,denominator);   //returning prev values of n and d   we want no changes 

numerator = numerator + denominator;

this->simplify();

fnew.simplify();


return fnew;



}


Fraction& operator+=(Fraction const &f2){

int lcm = denominator*f2.denominator;

int x = lcm / denominator;

int y = lcm / f2.denominator;

int num = x*numerator + (y*f2.numerator);

//we want changes in f1 itself
numerator = num;
denominator = lcm;

this->simplify();

return *this;

//if we will not return by reference we will not able to do nesting


}


};


