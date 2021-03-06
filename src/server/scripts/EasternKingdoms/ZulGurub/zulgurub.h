/*
 * Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2006-2009 ScriptDev2 <https://scriptdev2.svn.sourceforge.net/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DEF_ZULGURUB_H
#define DEF_ZULGURUB_H

#define ZGScriptName "instance_zulgurub"

uint32 const EncounterCount = 5;

enum DataTypes
{
    DATA_VENOXIS            = 0,
    DATA_MANDOKIR           = 1,
    DATA_KILNARA            = 2,
    DATA_ZANZIL             = 3,
    DATA_JINDO              = 4,

    // Cache of Madness
    DATA_HAZZARAH           = 5,
    DATA_RENATAKI           = 6,
    DATA_WUSHOOLAY          = 7,
    DATA_GRILEK             = 8
};

enum CreatureIds
{
    NPC_VENOXIS             = 52155,
    NPC_MANDOKIR            = 52151,
    NPC_KILNARA             = 52059,
    NPC_ZANZIL              = 52053,
    NPC_JINDO               = 52148,

    // Cache of Madness
    NPC_HAZZARAH            = 52271,
    NPC_RENATAKI            = 52269,
    NPC_WUSHOOLAY           = 52286,
    NPC_GRILEK              = 52258
};

template<class AI>
CreatureAI* GetZulGurubCitadelAI(Creature* creature)
{
    if (InstanceMap* instance = creature->GetMap()->ToInstanceMap())
        if (instance->GetInstanceScript())
            if (instance->GetScriptId() == sObjectMgr->GetScriptId(ZGScriptName))
                return new AI(creature);
    return NULL;
}

#endif

