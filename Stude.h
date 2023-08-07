
#ifndef STUDE_H
#define STUDE_H

#include <string>

/**
  * class Stude
  * 
  */

class Stude
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Stude ();

  /**
   * Empty Destructor
   */
  virtual ~Stude ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void browse ()
  {
  }


  /**
   */
  void select ()
  {
  }


  /**
   */
  void register ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void name_and_address;
  void marks;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name_and_address
   * @param new_var the new value of name_and_address
   */
  void setName_and_address (void new_var)   {
      name_and_address = new_var;
  }

  /**
   * Get the value of name_and_address
   * @return the value of name_and_address
   */
  void getName_and_address ()   {
    return name_and_address;
  }

  /**
   * Set the value of marks
   * @param new_var the new value of marks
   */
  void setMarks (void new_var)   {
      marks = new_var;
  }

  /**
   * Get the value of marks
   * @return the value of marks
   */
  void getMarks ()   {
    return marks;
  }
private:


  void initAttributes () ;

};

#endif // STUDE_H
