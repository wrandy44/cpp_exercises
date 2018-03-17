#ifndef STRIP_MINER_HH
# define STRIP_MINER_HH

#include <iostream>
# include "IMiningLaser.hh"
class StripMiner : public IMiningLaser{
public:
  StripMiner();
  ~StripMiner();
  virtual void mine(IAsteroid *);
};
#endif /* */
