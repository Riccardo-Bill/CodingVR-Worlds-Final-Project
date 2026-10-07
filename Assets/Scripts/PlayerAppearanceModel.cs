using Normal.Realtime;
using Normal.Realtime.Serialization;

[RealtimeModel]
public partial class PlayerAppearanceModel
{
   [RealtimeProperty(1, true, true)]
    public int _maskId;

    [RealtimeProperty(2, true, true)]
    public int _backId;
}
