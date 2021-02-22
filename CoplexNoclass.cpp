class ComplexNumbers {
    
  private:
    
  int real;
  int imaginary;
  
  public:
  
  ComplexNumbers(int real, int imaginary)
  {
      this -> real = real;
      this -> imaginary = imaginary;
  }
  
  void print()
  {
		cout<<real<<" + "<<"i"<<imaginary<<endl;    
  }
    
  void multiply(ComplexNumbers const &s2)
  {
      int x=real*s2.real -(imaginary*s2.imaginary);
      int y=real*s2.imaginary+(imaginary*s2.real);
      real=x;
      imaginary=y;
  }
  
  void plus(ComplexNumbers const &s2)
  {
      real=real+s2.real;
      imaginary=imaginary+s2.imaginary;
  }
    
};
