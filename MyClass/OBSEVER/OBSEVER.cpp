#include "OBSEVER.h"
std::list<OBSERVERLISTENER*> OBSERVER::listeners_ = {};

void OBSERVER::addListener(OBSERVERLISTENER* listener)
{
	listeners_.push_back(listener);
};

void OBSERVER::removeListener(OBSERVERLISTENER* listener) 
{
	listeners_.remove(listener);
};

// 衝突判定した
void OBSERVER::IsCollision(std::string collsion_tag)
{
	// 衝突判定したことを観測者に通知 
	for (auto listener : listeners_){listener->OnCollision(collsion_tag);}
}


