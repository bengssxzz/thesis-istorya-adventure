// Recompile at 19/01/2024 10:32:48 AM
#if USE_TIMELINE
#if UNITY_2017_1_OR_NEWER
// Copyright (c) Pixel Crushers. All rights reserved.

using System;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

namespace PixelCrushers.DialogueSystem
{
    [Serializable]
    public class RunLuaClip : PlayableAsset, ITimelineClipAsset
    {
        public RunLuaBehaviour template = new RunLuaBehaviour();

        public ClipCaps clipCaps
        {
            get { return ClipCaps.None; }
        }

        public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
        {
            var playable = ScriptPlayable<RunLuaBehaviour>.Create(graph, template);
            return playable;
        }
    }
}
#endif
#endif
