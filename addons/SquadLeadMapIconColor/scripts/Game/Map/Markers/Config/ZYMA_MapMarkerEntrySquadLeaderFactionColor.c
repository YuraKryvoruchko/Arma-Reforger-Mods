[BaseContainerProps()]
class ZYMA_MapMarkerEntrySquadLeaderFactionColor
{
	[Attribute(desc: "Faction of a squad leader")]
	protected string m_sFactionKey;
	[Attribute("1.0 1.0 1.0 1.0")]
	protected ref Color m_cFactionOwnSquadColor;
	
	string GetFactionKey()
	{
		return m_sFactionKey;
	}
	
	ref Color GetOwnSquadColor()
	{
		return m_cFactionOwnSquadColor;
	}
}