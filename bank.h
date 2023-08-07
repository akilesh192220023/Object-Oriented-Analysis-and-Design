
#ifndef BANK_H
#define BANK_H
#include "payment.h"

#include <string>

/**
  * class bank
  * 
  */

class bank : public payment
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  bank ();

  /**
   * Empty Destructor
   */
  virtual ~bank ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  void Account_No;
  void Account_type;
  void Online_payment_id_password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Account_No
   * @param new_var the new value of Account_No
   */
  void setAccount_No (void new_var)   {
      Account_No = new_var;
  }

  /**
   * Get the value of Account_No
   * @return the value of Account_No
   */
  void getAccount_No ()   {
    return Account_No;
  }

  /**
   * Set the value of Account_type
   * @param new_var the new value of Account_type
   */
  void setAccount_type (void new_var)   {
      Account_type = new_var;
  }

  /**
   * Get the value of Account_type
   * @return the value of Account_type
   */
  void getAccount_type ()   {
    return Account_type;
  }

  /**
   * Set the value of Online_payment_id_password
   * @param new_var the new value of Online_payment_id_password
   */
  void setOnline_payment_id_password (void new_var)   {
      Online_payment_id_password = new_var;
  }

  /**
   * Get the value of Online_payment_id_password
   * @return the value of Online_payment_id_password
   */
  void getOnline_payment_id_password ()   {
    return Online_payment_id_password;
  }
private:


  void initAttributes () ;

};

#endif // BANK_H
