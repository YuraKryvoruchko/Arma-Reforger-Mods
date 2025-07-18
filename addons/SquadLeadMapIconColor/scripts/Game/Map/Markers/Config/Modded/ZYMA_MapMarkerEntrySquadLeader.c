[BaseContainerProps(), SCR_MapMarkerTitle()]
modded class SCR_MapMarkerEntrySquadLeader: SCR_MapMarkerEntryDynamic
{
	[Attribute()]
	protected ref array<ref ZYMA_MapMarkerEntrySquadLeaderFactionColor> m_aFactions;
	
	ref Color GetSquadMarkerOwnColor(Faction faction)
	{
		string factionKey = faction.GetFactionKey();
		for(int i = 0; i < m_aFactions.Count(); i++)
		{
			if(factionKey == m_aFactions[i].GetFactionKey())
				return m_aFactions[i].GetOwnSquadColor();
		}

		return null;
	}
}
