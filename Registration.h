
#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <string>

/**
  * class Registration
  * 
  */

class Registration
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Registration ();

  /**
   * Empty Destructor
   */
  virtual ~Registration ();

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
  void Display ()
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

  void Reg_no;
  void course_opted;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Reg_no
   * @param new_var the new value of Reg_no
   */
  void setReg_no (void new_var)   {
      Reg_no = new_var;
  }

  /**
   * Get the value of Reg_no
   * @return the value of Reg_no
   */
  void getReg_no ()   {
    return Reg_no;
  }

  /**
   * Set the value of course_opted
   * @param new_var the new value of course_opted
   */
  void setCourse_opted (void new_var)   {
      course_opted = new_var;
  }

  /**
   * Get the value of course_opted
   * @return the value of course_opted
   */
  void getCourse_opted ()   {
    return course_opted;
  }
private:


  void initAttributes () ;

};

#endif // REGISTRATION_H
