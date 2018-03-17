
#ifndef ERRORS_HPP_
#define ERRORS_HPP_

#include <string>

class NasaError
{
public:
  NasaError(std::string const &message,
	    std::string const &component = "Unknown");
  std::string const &getComponent() const;
  std::string const &what() const;
  ~NasaError(){};
protected:
  std::string _message;
  std::string _component;
};

class MissionCriticalError: public NasaError
{
public:
   MissionCriticalError(std::string const &message,
		       std::string const &component = "Unknown");
  ~MissionCriticalError();
  
};

class LifeCriticalError: public NasaError
{

    public:
         LifeCriticalError(std::string const &message,
                std::string const &component = "Unknown");
};

class UserError: public NasaError
{

    public:
         UserError(std::string const &message,
                std::string const &component = "Unknown");
};

class CommunicationError : public NasaError
{
private:
public:
   CommunicationError(std::string const &message);
};

#endif
