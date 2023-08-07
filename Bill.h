
#ifndef BILL_H
#define BILL_H

#include <string>
#include vector



/**
  * class Bill
  * 
  */

class Bill
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Bill ();

  /**
   * Empty Destructor
   */
  virtual ~Bill ();

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
  void Bill_create ()
  {
  }


  /**
   */
  void Bill_update ()
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

  void Bill_no;
  void date;
  void member_id;
  void amount;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Bill_no
   * @param new_var the new value of Bill_no
   */
  void setBill_no (void new_var)   {
      Bill_no = new_var;
  }

  /**
   * Get the value of Bill_no
   * @return the value of Bill_no
   */
  void getBill_no ()   {
    return Bill_no;
  }

  /**
   * Set the value of date
   * @param new_var the new value of date
   */
  void setDate (void new_var)   {
      date = new_var;
  }

  /**
   * Get the value of date
   * @return the value of date
   */
  void getDate ()   {
    return date;
  }

  /**
   * Set the value of member_id
   * @param new_var the new value of member_id
   */
  void setMember_id (void new_var)   {
      member_id = new_var;
  }

  /**
   * Get the value of member_id
   * @return the value of member_id
   */
  void getMember_id ()   {
    return member_id;
  }

  /**
   * Set the value of amount
   * @param new_var the new value of amount
   */
  void setAmount (void new_var)   {
      amount = new_var;
  }

  /**
   * Get the value of amount
   * @return the value of amount
   */
  void getAmount ()   {
    return amount;
  }
private:


  void initAttributes () ;

};

#endif // BILL_H
