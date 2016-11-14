#include "contact.h"
#include<typeinfo.h>

bool Contact::isValidToAdd() const
{
    /*
    Adding a new contact requires:
    -first name
    -last name
    -phone number
    */

    bool hasNames = !(firstName.empty() || lastName.empty());

    if(hasNames && !phoneNumber.empty()&&isPhonenoValid()&&isEmailValid())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Contact::isEmpty() const
{
    if(firstName.empty() && 
        lastName.empty() &&
        phoneNumber.empty() && 
        address.empty() && 
        email.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Contact:: isPhonenoValid()const
{
  int i;
   
  if(phoneNumber.length()<=9)
    {
    for(i=0;i<10;i++)
    {
      if(isdigit(phoneNumber[i]));

    return false;
     }
  }
 else
    {
    return true;

    }
}
bool Contact ::isEmailValid() const
{
    int len,i;
    len=email.length();
   for(i=0;i<len;i++)
   {
       if(email[i]=='@')
       {
           break;

       }
   }
   if(i==len)
   {
       return false;
   }
   else
   {
       for(i=0;i<len;i++)
       {
           if(email[i]=='.')
           {
               break;

           }
       }
       if(i==len)
       {
           return false;
       }
       else
       {
          return true;
       }
   }
}
