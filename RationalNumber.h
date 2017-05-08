// Exercise 10.10 RationalNumber.h
// RationalNumber skeletal class definition.
#ifndef RATIONAL_NUMBER_H
#define RATIONAL_NUMBER_H

class RationalNumber
{
public:
   explicit RationalNumber( int = 0, int = 1 ); // default constructor
   RationalNumber operator+( const RationalNumber & ); // addition
   RationalNumber operator-( const RationalNumber & ); // subtraction
   RationalNumber operator*( const RationalNumber & ); // multiplication
   RationalNumber operator/( const RationalNumber & ); // division
   // relational operators
   bool operator<( const RationalNumber & ) const;
   bool operator>( const RationalNumber & ) const;
   bool operator<=( const RationalNumber & ) const;
   bool operator>=( const RationalNumber & ) const;
   bool operator==( const RationalNumber & ) const;
   bool operator!=( const RationalNumber & ) const;
   // equality operators

   
   
   void printRational() const; // display rational number
private:
   int numerator; 	// private variable numerator
   int denominator; // private variable denominator
   void reduce(); 	// function for fraction reduction
}; // end class RationalNumber

#endif