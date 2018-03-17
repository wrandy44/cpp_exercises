//
// ex05.hpp for azd in /home/debrau_c/cours/piscine/cpp_d15/ex05
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Wed Jan 18 17:23:29 2017 Carl DEBRAUWERE
// Last update Wed Jan 18 23:46:03 2017 Carl DEBRAUWERE
//

#ifndef _EX_05_H_
# define _EX_05_H_

# include <exception>
# include <iostream>

template<class T>
class array{

  unsigned int _size;
public:
  T *_data;
  array(){_data = 0; _size = 0;};
  array(unsigned int x){
    _data = new T[x];
    for (unsigned int i = 0; i < x; i++)
      _data[i] = 0;
    _size = x;
  };
  array(const array &a){

    this->_size = a._size;
    this->_data = new T[a._size];
    for (unsigned int i = 0; i < a._size; i++)
      this->_data[i] = a._data[i];
  };


  ~array(){
    delete [] _data;
  }

  
  unsigned int size() const { return _size; };

  T &operator[](unsigned int i) const{
    if (i > _size){
      throw std::exception();
    }
    return this->_data[i];
  }

  T &operator[](unsigned int i){
    if (i >= _size){
      T *n = new T[i + 2];
      unsigned int j;
      for (j = 0; j < _size; j++){
	n[j] = this->_data[j];
      }
      for (; j < i; j++){
	n[j] = 0;
      }
      delete [] _data;
      _data = n;
      _size = i + 1;
    }
    return this->_data[i];
  }
  array<T> &operator=(const array<T> &a){
    if (this->_size > 0){
      delete [] _data;
    }
    this->_size = a._size;
    this->_data = new T[a._size];
    for (unsigned int i = 0; i < a._size; i++)
      this->_data[i] = a._data[i];
    return *this;
  }
  void dump() const{
    std::cout << "[";
    for (unsigned int i = 0; i < _size; i++){
      if (sizeof(T) == 1)//On a affaire a un bool
	{
	  if (this->_data[i])
	    std::cout << "true";
	  else
	    std::cout << "false";
	}
      else{
	std::cout << this->_data[i];
      }
      if (i != _size -1)
	std::cout << ", ";
    }
    std::cout << "]" << std::endl;
  }
  template<typename X>
  array<X> convertTo(X (*f)(T const&)) const{
    array<X> ret(this->_size);
    for (unsigned int i = 0; i < this->_size; i++)
      ret._data[i] = f(this->_data[i]);
    return ret;
  }
};

#endif /* */
