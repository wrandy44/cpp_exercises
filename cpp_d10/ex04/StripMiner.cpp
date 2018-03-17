#include "StripMiner.hh"

StripMiner::StripMiner(){}
StripMiner::~StripMiner(){}
void StripMiner::mine(IAsteroid *s){ std::cout << "* mining deep ... got "<< s->beMined(this)<<" ! *" << std::endl; }
