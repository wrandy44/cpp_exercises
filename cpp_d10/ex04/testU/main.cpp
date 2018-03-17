//
// main.cpp for azd in /home/debrau_c/cours/piscine/cpp_d10/ex04
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Sat Jan 14 00:43:07 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 03:42:49 2017 Carl DEBRAUWERE
//

#include "DeepCoreMiner.hh"
#include "AsteroKreog.hh"
#include "StripMiner.hh"
#include "KoalaSteroid.hh"
#include "MiningBarge.hh"

int main(){
  AsteroKreog *_ak = new AsteroKreog();
  MiningBarge mb;
  DeepCoreMiner *dp = new DeepCoreMiner();
  StripMiner *sm = new StripMiner();
  KoalaSteroid *ks = new KoalaSteroid();
  mb.equip(sm);
  mb.equip(dp);
  mb.equip(dp);

  mb.mine(_ak);/*
  std::cout << "Expected : Sullite" << std::endl;
  dp->mine(_ak);
  std::cout << "Expected : Kreogium" << std::endl;
  sm->mine(_ak);
  std::cout << "Expected : Zazium" << std::endl;
  dp->mine(ks);
  std::cout << "Expected : Koalite" << std::endl;
  sm->mine(ks);*/
  return 0;
}
