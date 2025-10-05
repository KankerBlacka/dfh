#pragma once

// Example hook for Int method (Unity Il2Cpp games)
// This is referenced by the "Unlimited Diamonds" toggle in the menu

// Declarations for hook functions and variables
extern int (*old_GetHardCurrency)(void *instance);
extern int GetHardCurrency_Hook(void *instance);

extern float (*old_GetHealth)(void *instance);
extern float GetHealth_Hook(void *instance);

extern int (*old_GetAmmo)(void *instance);
extern int GetAmmo_Hook(void *instance);

extern void InstallGameHooks();

