
#ifndef BOOK_H
#define BOOK_H

#include <string>
#include vector



/**
  * class Book
  * 
  */

class Book
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Book ();

  /**
   * Empty Destructor
   */
  virtual ~Book ();

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
  void display_book_details ()
  {
  }


  /**
   */
  void Updatestatus ()
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

  void Book_id;
  void author;
  void name;
  void price;
  void rack_no;
  void status;
  void edition;
  void dateof_purchase;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Book_id
   * @param new_var the new value of Book_id
   */
  void setBook_id (void new_var)   {
      Book_id = new_var;
  }

  /**
   * Get the value of Book_id
   * @return the value of Book_id
   */
  void getBook_id ()   {
    return Book_id;
  }

  /**
   * Set the value of author
   * @param new_var the new value of author
   */
  void setAuthor (void new_var)   {
      author = new_var;
  }

  /**
   * Get the value of author
   * @return the value of author
   */
  void getAuthor ()   {
    return author;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of price
   * @param new_var the new value of price
   */
  void setPrice (void new_var)   {
      price = new_var;
  }

  /**
   * Get the value of price
   * @return the value of price
   */
  void getPrice ()   {
    return price;
  }

  /**
   * Set the value of rack_no
   * @param new_var the new value of rack_no
   */
  void setRack_no (void new_var)   {
      rack_no = new_var;
  }

  /**
   * Get the value of rack_no
   * @return the value of rack_no
   */
  void getRack_no ()   {
    return rack_no;
  }

  /**
   * Set the value of status
   * @param new_var the new value of status
   */
  void setStatus (void new_var)   {
      status = new_var;
  }

  /**
   * Get the value of status
   * @return the value of status
   */
  void getStatus ()   {
    return status;
  }

  /**
   * Set the value of edition
   * @param new_var the new value of edition
   */
  void setEdition (void new_var)   {
      edition = new_var;
  }

  /**
   * Get the value of edition
   * @return the value of edition
   */
  void getEdition ()   {
    return edition;
  }

  /**
   * Set the value of dateof_purchase
   * @param new_var the new value of dateof_purchase
   */
  void setDateof_purchase (void new_var)   {
      dateof_purchase = new_var;
  }

  /**
   * Get the value of dateof_purchase
   * @return the value of dateof_purchase
   */
  void getDateof_purchase ()   {
    return dateof_purchase;
  }
private:


  void initAttributes () ;

};

#endif // BOOK_H
