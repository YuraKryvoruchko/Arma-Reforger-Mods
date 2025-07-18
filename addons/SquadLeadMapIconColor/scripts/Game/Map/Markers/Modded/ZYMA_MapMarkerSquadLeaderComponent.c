modded class SCR_MapMarkerSquadLeaderComponent : SCR_MapMarkerDynamicWComponent
{
	protected ref Color m_cOwnSquadColor = Color.Black;
	
	override void SetGroupActive(bool state, string factionName = string.Empty)
	{	
		if (state)
		{
			m_wOwnSquadBackground.SetVisible(true);
			m_wOwnSquadIcon.SetVisible(true);
			m_wOwnSquadIconGlow.SetVisible(true);
		}
		else 
		{
			m_wOwnSquadBackground.SetVisible(false);
			m_wOwnSquadIcon.SetVisible(false);
			m_wOwnSquadIconGlow.SetVisible(false);
		}
		
		m_wOwnSquadIcon.SetColor(m_cOwnSquadColor);
		m_wOwnSquadIconGlow.SetColor(m_cOwnSquadColor);
	}
	
	void SetOwnSquadColor(notnull Color color) 
	{
		m_cOwnSquadColor = color;
	}
}