#include "MiningBarge.hh"

MiningBarge::MiningBarge(){
  for (int i = 0; i<  4; i++)
    _weapon[i] = 0;
}
MiningBarge::~MiningBarge(){
}
void MiningBarge::equip(IMiningLaser *n){
  for (int i = 0; i<  4; i++)
    if (_weapon[i] == 0){
       _weapon[i] = n;
       return ;
    }
     
}

void MiningBarge::mine(IAsteroid *a) const{
  for (int i = 0; i < 4 && _weapon[i] != 0; i++)
    _weapon[i]->mine(a);
}
