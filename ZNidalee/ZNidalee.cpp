#include "PluginSDK.h"
#include "ZNidalee.h"

PluginSetup("ZNidalee");

IUnit * ZNidalee::STarg;
IUnit * ZNidalee::Player;
ZNidaleeMenu * ZNidalee::Menu;
ZNidaleeModes * ZNidalee::Modes;
ZNidaleeExtensions * ZNidalee::Ex;

eCollisionFlags ZNidalee::QCollisionFlags;
std::map<std::string, int> ZNidalee::Stamps;

ISpell * ZNidalee::SpellQ;
ISpell * ZNidalee::SpellW;
ISpell * ZNidalee::SpellE;
ISpell * ZNidalee::SpellR;

ISpell2 * ZNidalee::SJavelin;
ISpell2 * ZNidalee::SBushwhack;
ISpell2 * ZNidalee::SPounce;
ISpell2 * ZNidalee::SSwipe;

PLUGIN_EVENT(void) OnGameUpdate() {
    ZNidalee::Modes->OnUpdate(); }

PLUGIN_EVENT(void) OnCastSpell(CastedSpell & args) {
    ZNidalee::Modes->OnSpellCast(args); }

PLUGIN_EVENT(void) OnGapCloser(GapCloserSpell const & args) {
    ZNidalee::Modes->OnGapCloser(args); }

PLUGIN_EVENT(void) OnRender() {
    ZNidalee::Modes->OnRender(); }

PLUGIN_API void OnLoad(IPluginSDK * sdk) {
    PluginSDKSetup(sdk);
    ZNidalee::Player = GEntityList->Player();

    if(strcmp(ZNidalee::Player->ChampionName(), "Nidalee") == 0) {
        ZNidalee::OnBoot();
        ZNidalee::Menu = new ZNidaleeMenu(GPluginSDK->AddMenu("ZNidalee"));
        GEventManager->AddEventHandler(kEventOnSpellCast, OnCastSpell);
        GEventManager->AddEventHandler(kEventOnGameUpdate, OnGameUpdate);
        GEventManager->AddEventHandler(kEventOnGapCloser, OnGapCloser);
        GEventManager->AddEventHandler(kEventOnRender, OnRender);
        GGame->PrintChat("<font color=\"#794DFF\"><b>ZNidalee</b></font><b><font color=\"#FFFFFF\"> Loaded!</font></b>"); } }

PLUGIN_API void OnUnload() {
    if(strcmp(ZNidalee::Player->ChampionName(), "Nidalee") == 0) {
        GEventManager->RemoveEventHandler(kEventOnGameUpdate, OnGameUpdate);
        GEventManager->RemoveEventHandler(kEventOnGapCloser, OnGapCloser);
        GEventManager->RemoveEventHandler(kEventOnSpellCast, OnCastSpell);
        GEventManager->RemoveEventHandler(kEventOnRender, OnRender);
        ZNidalee::Menu->Menu->Remove(); } }