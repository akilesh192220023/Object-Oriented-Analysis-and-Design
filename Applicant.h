
#ifndef APPLICANT_H
#define APPLICANT_H

#include <string>

/**
  * class Applicant
  * 
  */

class Applicant
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Applicant ();

  /**
   * Empty Destructor
   */
  virtual ~Applicant ();

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
  void apply_passport ()
  {
  }


  /**
   */
  void submission_of_proof ()
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

  string applicant_name;
  Applicant applicant_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of applicant_name
   * @param new_var the new value of applicant_name
   */
  void setApplicant_name (string new_var)   {
      applicant_name = new_var;
  }

  /**
   * Get the value of applicant_name
   * @return the value of applicant_name
   */
  string getApplicant_name ()   {
    return applicant_name;
  }

  /**
   * Set the value of applicant_details
   * @param new_var the new value of applicant_details
   */
  void setApplicant_details (Applicant new_var)   {
      applicant_details = new_var;
  }

  /**
   * Get the value of applicant_details
   * @return the value of applicant_details
   */
  Applicant getApplicant_details ()   {
    return applicant_details;
  }
private:


  void initAttributes () ;

};

#endif // APPLICANT_H
