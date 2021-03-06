#pragma once
#include "PluginSDK.h"
#include <map>

class ZZedMenu {
    public:
        explicit ZZedMenu(IMenu * menu);

        std::map<int, IMenuOption *> BlackListRTargets;
        std::map<std::basic_string<char>, IMenuOption *> SpellsToAvoid;

        // root;
        IMenu * Menu;
        IMenu * ComboMenu;
        IMenuOption * Debug;

        IMenuOption * UseComboQ;
        IMenuOption * UseComboW;
        IMenuOption * UseComboE;
        IMenuOption * UseComboR;
        IMenuOption * SwapRIfDead;
        IMenuOption * ExtendedQCombo;
        IMenuOption * ShadowPlacement;
        IMenuOption * MinimumHarassEnergy;
        IMenuOption * UseHarassQ;
        IMenuOption * UseHarassW;
        IMenuOption * UseHarassE;
        IMenuOption * ExtendedQHarass;
        IMenuOption * JungleOrderPriority;
        IMenuOption * AutoEUnitInRage;
        IMenuOption * AutoEUnitInRagePct;
        IMenuOption * DrawComboDamage;
        IMenuOption * DrawComboDamageColor;
        IMenuOption * ComboKey;
        IMenuOption * HarassKey;
        IMenuOption * FleeKey;
        IMenuOption * UltMode;
        IMenuOption * ExHarassQMaxDamage;
        IMenuOption * ExComboQMaxDamage;
        IMenuOption * DrawPredictedShadow;
        IMenuOption * DebugPathfinding;
        IMenuOption * UseBlackList;
        IMenuOption * MinimumClearEnergy;
        IMenuOption * AutoR;
        IMenuOption * ClearKey;
        IMenuOption * UseFleeW;
        IMenuOption * UseItemsCombo;
        IMenuOption * AlwaysRSelected;
        IMenuOption * UseHarassWPF;
        IMenuOption * DrawQ;
        IMenuOption * DrawQColor;
        IMenuOption * DrawW;
        IMenuOption * DrawWColor;
        IMenuOption * DrawE;
        IMenuOption * DrawEColor;
        IMenuOption * DrawR;
        IMenuOption * DrawRColor;
        IMenuOption * UseJungleQ;
        IMenuOption * UseJungleW;
        IMenuOption * UseJungleE;
        IMenuOption * DontWJungleNearEnemy;
        IMenuOption * UseRAvoider;
        IMenuOption * UseIgnite;
        IMenuOption * SwapForKill;
        IMenuOption * LowFPSMode;
        IMenuOption * AssassinRange;
        IMenuOption * DrawAssassinRange;
        IMenuOption * DrawAssassinRangeColor;
        IMenuOption * LaughIfDead;
        IMenuOption * LastHitEUnkillable;
        IMenuOption * LastHitE;
        IMenuOption * LastHitECount;
        IMenuOption * LastHitEUnderTower;
        IMenuOption * LastHitQ;
        IMenuOption * LastHitQCount;
        IMenuOption * LastHitQUnderTower;
        IMenuOption * LastHitQUnkillable;
        IMenuOption * MinimumLastHitEnergy;
        IMenuOption * MinimumLastHitEnergyTower;
        IMenuOption * GapcloseAfterR; };


