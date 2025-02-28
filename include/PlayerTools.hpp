/*
  Created on 23.06.18.
*/

#pragma once

#include "config.h"
#include <optional>

#if ENABLE_VISUALS
#include <colors.hpp>
#endif

class CachedEntity;

namespace player_tools
{
enum class IgnoreReason
{
    DO_NOT_IGNORE,
    IS_HOOVY,
    IS_TAUNTING,
    LOCAL_PLAYER_LIST,
    ONLINE_NO_TARGET,
    ONLINE_FRIENDLY_SOFTWARE,
    OTHER
};

bool shouldTargetSteamId(unsigned id);
bool shouldTarget(CachedEntity *player);

bool shouldAlwaysRenderEspSteamId(unsigned id);
bool shouldAlwaysRenderEsp(CachedEntity *entity);

#if ENABLE_VISUALS
std::optional<colors::rgba_t> forceEspColorSteamId(unsigned id);
std::optional<colors::rgba_t> forceEspColor(CachedEntity *entity);
#endif

void onKilledBy(CachedEntity *entity);
} // namespace player_tools
