#pragma once

#include "../Strategy.h"

namespace ai
{
    class HealPriestNonCombatStrategy : public CombatStrategy
    {
    public:
        HealPriestNonCombatStrategy(PlayerbotAI* ai);

    public:
        virtual void InitTriggers(std::list<TriggerNode*> &triggers);
        virtual string getName() { return "nc"; }
    };
}