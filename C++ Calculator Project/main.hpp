
#ifndef MAIN_HPP_
#define MAIN_HPP_

class Calculator{
    public:
      
      Calculator(); // default constructor
      double getSUM() const {return enter;} // accessor

      void addition(double, double ); //addition function
      void subtraction(double, double );
      void multiply(double, double);
      void divide(double, double);
      void power(double, double);
      void root(double);
      void output () const;

    private:
    
    double enter;

};
#endif