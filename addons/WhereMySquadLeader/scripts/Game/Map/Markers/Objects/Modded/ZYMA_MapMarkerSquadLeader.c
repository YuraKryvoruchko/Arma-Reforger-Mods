modded class SCR_MapMarkerSquadLeader : SCR_MapMarkerEntity
{
	/* For marker visibility on the map if the player is a squad leader
	override void OnPlayerIdUpdate()
	{
		super.OnPlayerIdUpdate();
		SetLocalVisible(true);
	}*/
	
	override void UpdatePlayerAffiliation()
	{
		if(!m_wRoot)
			return;
		
		SCR_MapMarkerEntrySquadLeader configEntry = SCR_MapMarkerEntrySquadLeader.Cast(m_ConfigEntry);
		if(!configEntry)
			return;		
		
		Faction localFaction = SCR_FactionManager.SGetLocalPlayerFaction();
		ref Color color = configEntry.GetSquadMarkerOwnColor(localFaction);
		if(color)
  			m_SquadLeaderWidgetComp.SetOwnSquadColor(configEntry.GetSquadMarkerOwnColor(localFaction));
		
		super.UpdatePlayerAffiliation();
	}
}