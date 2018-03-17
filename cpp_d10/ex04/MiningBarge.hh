//
// MiningBarge.hh for azd in /home/debrau_c/cours/piscine/cpp_d10/ex04
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Sat Jan 14 03:34:33 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 03:40:31 2017 Carl DEBRAUWERE
//

#ifndef MINING_BARGE_HH
# define MINING_BARGE_HH

#include "IAsteroid.hh"
#include "IMiningLaser.hh"
class MiningBarge{
  IMiningLaser *_weapon[4];
public:
  MiningBarge();
  ~MiningBarge();
  void equip(IMiningLaser *);
  void mine(IAsteroid *) const;
};
#endif /* MINING_BARGE_HH */
